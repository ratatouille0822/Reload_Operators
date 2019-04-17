#include "pch.h"
#include <iostream>

using namespace std;

class MyInt
{
public:
	MyInt(int a)
	{
		this->a = a;
	}
	int a;
	int operator++()
	{
		this->a += 1;
		return this->a;
	}
	int operator++(int)
	{
		int temp = this->a;
		this->a += 1;

		return temp;
	}
};
//make some changes

int main()
{
	MyInt a(0);
	cout << a.a << endl;
	++a;
	cout << a.a << endl;
	cout << a.a++ << endl;
	cout << a.a << endl;
	
	
    std::cout << "Hello World!\n"; 
}

