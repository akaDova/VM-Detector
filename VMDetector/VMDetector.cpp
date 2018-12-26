// VMDetector.cpp : exported functions.
//
#pragma once
#include "stdafx.h"

#include "VMDetector.h"


// check by cpuid instruction
__declspec(dllexport) BOOL CheckByCPUID()
{
	int cpuinfo[4];
	__cpuid(cpuinfo, 1);

	int ecx = cpuinfo[2];
	if (ecx >> 31 & 1)
		return TRUE;
	return FALSE;
}