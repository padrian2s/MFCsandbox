// nice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void test(int x, int y)
{
    int xx = 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
    volatile int idx = 0;
    int r = 234234;
    test(1, 2);

    unsigned int unsigInt = 13212;

    r = unsigInt;

    unsigInt = r;

	return 0;
}

