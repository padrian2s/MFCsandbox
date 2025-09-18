// rr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <ostream>

using namespace std;


////////////////////////////////////////////////////////

class tip 
{
public:
    void virtual draw()
    {
        cout << "draw din tip" << endl;
    }
};

////////////////////////////////////////////////////////

class tip1 : public tip
{
public:
    tip1()
    {
        cout << "tip1 c" << endl;
    }
    void draw()
    {
        cout << "draw tip1" << endl;
    }
};

////////////////////////////////////////////////////////

class tip2 : public tip
{
public:
    tip2()
    {
        cout << "tip2 c" << endl;
    }
    void draw()
    {
        cout << "draw tip1" << endl;
    }
};

////////////////////////////////////////////////////////

class a
{
protected:
    a() { 
        cout << "constructor a" << endl;
        unionDT.s=new tip2();
    }

public:
    virtual void test() 
    { 
        cout << "test din a" << endl;         
    }

    union un
    {
        int i;
        double f;
        tip *s;
    };

    un unionDT;
};

////////////////////////////////////////////////////////
class b: public a
{
public:
    b() { 
        cout << "constructor b" << endl;
    }
    void test()
    {
        cout << "aaa" << endl;
    }
};

////////////////////////////////////////////////////////

class c: public a
{
public:
    c() { 
        cout << "constructor c" << endl;
    }

    void test()
    {
        cout << "ccc" << endl;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int _tmain(int argc, _TCHAR* argv[])
{
    int i;

    a* fooC =new c();
    
    tip2 *tt= dynamic_cast<tip2*>(fooC->unionDT.s);
    tt->draw();

    cin >> i;

    delete fooC;

	return 0;
}

