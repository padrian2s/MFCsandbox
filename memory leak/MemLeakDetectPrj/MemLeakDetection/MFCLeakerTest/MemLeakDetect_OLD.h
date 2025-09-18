/*************************************************************
 Author		: David A. Jones
 File Name	: MemLeakDetect.h
 Date		: July 30, 2004
 Synopsis	:		 
			A trace memory feature for source code to trace and
			find memory related bugs. 

 Future		:
				1) Memory corruption
				2) Freeing memory without allocating
				3) Freeing memory twice
				4) Not Freeing memory at all
				5) over running memory boundardies


****************************************************************/
#define _CRTDBG_MAP_ALLOC

#define _CRTBLD
#include <afxtempl.h>
#include "dbgint.h"
#include <ImageHlp.h>

#pragma comment( lib, "imagehlp.lib" )

#define MLD_MAX_NAME_LENGTH			256
#define MLD_MAX_TRACEINFO			256

typedef struct _STACKFRAMEENTRY
{
		ADDRESS   AddrPC;
		ADDRESS   AddrFrame;
	
} STACKFRAMEENTRY;

class CMemLeakDetect
{
	public:
		class AllocBlockInfo
		{
			public:
				inline AllocBlockInfo() {};
				inline ~AllocBlockInfo() {};
				inline AllocBlockInfo(AllocBlockInfo& abi)
				{
					address		= abi.address;
					size		= abi.size;
					lineNumber	= abi.lineNumber;
					occurance	= abi.occurance;
					memcpy(&traceinfo[0], &abi.traceinfo[0], sizeof(traceinfo));
					memcpy(fileName, abi.fileName, sizeof(fileName));
				};

			void*				address;
			DWORD				size;
			char				fileName[MLD_MAX_NAME_LENGTH];
			DWORD				lineNumber;
			DWORD				occurance;
			STACKFRAMEENTRY		traceinfo[MLD_MAX_TRACEINFO];
		};

	public:
		CMemLeakDetect();
		~CMemLeakDetect();
		void Init();
		void End();
		void addMemoryTrace(void* addr,  DWORD asize,  char *fname, DWORD lnum);
		void redoMemoryTrace(void* addr,  void* oldaddr, DWORD asize,  char *fname, DWORD lnum);
		void removeMemoryTrace(void* addr);
		void cleanupMemoryTrace();
		void dumpMemoryTrace();
		//

	CMap<LPVOID, LPVOID, AllocBlockInfo, AllocBlockInfo> m_AllocatedMemoryList;
	DWORD memoccurance;
	bool  isLocked;
	//
	private:

		BOOL initSymInfo(char* lpUserPath);
		BOOL cleanupSymInfo();
		void symbolPaths( char* lpszSymbolPaths);
		void symStackTrace(STACKFRAMEENTRY* pStacktrace);
		BOOL symFunctionInfoFromAddresses(ULONG fnAddress, ULONG stackAddress, char* lpszSymbol);
		BOOL symSourceInfoFromAddress(UINT address, char* lpszSourceInfo);
		BOOL symModuleNameFromAddress(UINT address, char* lpszModule);

		HANDLE				m_hProcess;
		PIMAGEHLP_SYMBOL	m_pSymbol;
		DWORD				m_dwsymBufSize;
};