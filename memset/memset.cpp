// memset.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
    char *buff = NULL;
    buff = new char(10);    
    memset(buff, 0, 10);
	return 0;
}

