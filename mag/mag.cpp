// mag.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <conio.h>

struct cool {
	char p1, p2, p[4];
	cool(int c): p2(c++), p1(c) { 
		strcpy(p, "v_ga"); 
		p[1]=p2; p2=p[3]; p[3]=c; 
		printf("www.%s.com/feladvany", this); 
	} 
} leet('n');


int _tmain(int argc, _TCHAR* argv[])
{
	getch();
	return 0;	
}