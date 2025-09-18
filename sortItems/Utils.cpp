#include "stdafx.h"
#include "Utils.h"
#include <wincrypt.h>	// Cryptographic API Prototypes and Definitions
#include <iostream>

const CString Utils::PASS_PHRASE = "CDMS pass phrase";

CString Utils::digestMessage(CString & message) throw(BusinessException)
{
    HCRYPTPROV hCryptProv; 
    HCRYPTHASH hHash; 
    BYTE bHash[0x7f]; 
    DWORD dwHashLen= 16; // The MD5 algorithm always returns 16 bytes. 
    DWORD cbContent= message.GetLength(); 
    BYTE* pbContent= (BYTE*)message.GetBuffer(cbContent); 

    CString digestMessage;


    if(CryptAcquireContext(&hCryptProv, 
        NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT | CRYPT_MACHINE_KEYSET)) 
    {
        if(CryptCreateHash(hCryptProv, 
            CALG_MD5,	// algorithm identifier definitions see: wincrypt.h
            0, 0, &hHash)) 
        {
            if(CryptHashData(hHash, pbContent, cbContent, 0))
            {

                if(CryptGetHashParam(hHash, HP_HASHVAL, bHash, &dwHashLen, 0)) 
                {
                    // Make a string version of the numeric digest value
                    digestMessage.Empty();
                    CString tmp;
                    for (int i = 0; i<16; i++)
                    {
                        tmp.Format("%02x", bHash[i]);
                        digestMessage+=tmp;
                    }

                }
                else
                {
                    throw BusinessException("Error getting hash param"); 
                }
            }
            else 
            {
                throw BusinessException("Error hashing data"); 
            }
        }
        else 
        {
            throw BusinessException("Error creating hash"); 
        }

    }
    else 
    {
        throw BusinessException("Error acquiring context"); 
    }

    CryptDestroyHash(hHash); 
    CryptReleaseContext(hCryptProv, 0); 
    digestMessage.ReleaseBuffer();
    return digestMessage; 
}

CTime Utils::convertDateToCTime(unsigned long date)
{
    CTime convertedDate((int)(date/10000),(int)((date%10000)/100), (int)(date%100), 23, 59, 59);
    return convertedDate;
}
unsigned long Utils::convertDatefromCTime(CTime date)
{
    return ((date.GetYear()*10000) + (date.GetMonth() * 100) + date.GetDay());
}

CString Utils::hackBarcode(CString barcode)
{
	if (!VerifyBarcode(barcode))
	{		
		int digits[255];
		int length=barcode.GetLength();
		int i=0;

		for (i=0; i<length; i++)
		{
			digits[i]=(char)barcode[i]-48;
		}

		int sum=0;
		bool alt=true;

		for (i=length-2; i>=0; i--)
		{
			if (alt)
			{
				int temp = digits[i];
				temp *= 2;
				if (temp>9)
				{
					temp-=9;
				}
					sum += temp;
				}
				else
				{
					sum+=digits[i];
				}
				alt=!alt;
				int modulo = sum % 10;
				if (modulo>0)
				{
					digits[length-1] = 10 - modulo;
				}
		}

		CString luhn="";	
		for (i=0; i<length; i++)
		{
			char fooStr[2];
			luhn+=itoa(digits[i], fooStr, 10);
		}
		barcode=luhn;
	}

	return barcode;
}

short Utils::VerifyBarcode(CString barcode)
{
	short i = 0;
	int total = 0;

	// Calculate a Luhn check digit
	if(barcode.IsEmpty())
		return -1;

	if (barcode.GetLength() != 10)
	{
		return 0;
	}

	for(i = barcode.GetLength() - 2; i > -1; i -= 2)
	{
		if (barcode.GetAt(i) < '5')
			total+= (barcode.GetAt(i) - '0') * 2;
		else
			total+= (((barcode.GetAt(i) - '0') * 2) - 10) + 1;
	}

	for(i = barcode.GetLength() - 3; i > -1; i -= 2)
		total += barcode.GetAt(i) - '0';

	total = (((total / 10) + 1) * 10) - total;
	if (total == 10) total = 0;

	//----- MVE
	if (total > 10) total -= 10;
	//----- MVE

	char checkDigit = total + '0';

	// Check the last digit of the barcode against our calculated check 
	// digit.
	if (barcode.GetAt(barcode.GetLength() - 1) != checkDigit)
		return 0;
	else
		return 1;
}