// find_stdlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>

int _tmain(int argc, _TCHAR* argv[])
{
    list<int> L;
    L.push_back(3);
    L.push_back(1);
    L.push_back(7);

    list<int>::iterator result = find(L.begin(), L.end(), 7);


	return 0;
}

