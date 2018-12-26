// ConsoleApp.cpp : entry
//

#include <stdio.h>
#include <Windows.h>

#include "../VMDetector/VMDetector.h"

#define CheckByCPUID "_CheckByCPUID@0"

typedef BOOL (*LPVMCheck)();

LPCTSTR dllName = TEXT("VMDetector");

LPVMCheck isVM;


int main()
{
    
	HMODULE lib = LoadLibrary(dllName);
	if (lib != NULL)
	{	
		isVM = (LPVMCheck)GetProcAddress(lib, CheckByCPUID);

		if (isVM != NULL) 
		{
			printf_s(isVM() ? "VM" : "not VM");
			printf_s("\n");
		}
		else
		{
			printf_s("Error get isVM function\n");
		}

		
		FreeLibrary(lib);
	}
	else
	{
		printf_s("Error load dll\n");
	}

	system("pause");

	return 0;
}

