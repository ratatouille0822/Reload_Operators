#include "pch.h"
#include <iostream>

using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;	
	}
	void show_age()
	{
		cout << this->age << endl;
	}

	int age;
};

class SmartPointer
{
public:
	SmartPointer(Person* person)
	{
		this->person = person;
	}

	Person* person ;
	~SmartPointer()
	{
		delete person;
	}

	Person* operator->()
	{
		return this->person;
	}
	Person& operator*()
	{
		return *this->person;
	}

};




void test01()
{
	Person* person = new Person(10);
	SmartPointer smart_pointer(person);

	SmartPointer* p_smart_pointer = &SmartPointer(&Person(20));
	


	smart_pointer->show_age();

	cout << "-----------------------------------" << endl;
	(*smart_pointer).show_age();
}
int main()
{
	test01();
    std::cout << "Hello World!\n"; 
}






















