#include "pch.h"

int main()
{
	MyString p1;
	MyString p2 = "Hello";
	MyString p3 = p2;
	cout << p2 << endl;
	cout << p3 << endl;
	p1 = p2;
	cout << p1 << endl;

	MyString p4 = " World";
	p1 = p2 + p4;
	cout << p1 << endl;
    std::cout << "Hello World!\n"; 
	for (int i = 0; i < p1.GetSize(); i++)
		cout << p1[i];
	cout << endl;
}
