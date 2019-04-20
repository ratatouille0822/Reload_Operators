// 不能被继承的类.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//class NotSuccessable;

class Base
{
	friend class NotSuccessable;
private:
	Base()
	{
		cout << "Base class constructed" << endl;
	}
	~Base()
	{
		cout << "Base class destructed" << endl;
	}
	
};

class NotSuccessable : virtual public Base
{
public:
	NotSuccessable()
	{
		cout << "NotSuccessable constructed" << endl;
	}
	~NotSuccessable()
	{
		cout << "Not Successable destructed" << endl;
	}
};

// 此类报错！ 

//class TestSuccess : public NotSuccessable
//{
//	TestSuccess()
//	{
//		cout << "TestSuccess constructed" << endl;
//	}
//
//};

void test01()
{
	//TestSuccess test; // 报错：无法构造；
	NotSuccessable not_successable;
	NotSuccessable* p_not_scuuessable = new NotSuccessable;
	delete p_not_scuuessable;
}
int main()
{
	test01();
    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
