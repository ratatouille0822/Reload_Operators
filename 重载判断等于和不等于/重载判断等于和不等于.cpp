#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Complex
{
public:
	Complex(int number,const char* name)
	{
		this->number = number;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	Complex(const Complex& another_complex_instance)
	{
		this->number = another_complex_instance.number;
		this->name = new char[strlen(another_complex_instance.name) + 1];
		strcpy(this->name, another_complex_instance.name);
	}
	void show_members()
	{
		cout << this->number << "__" << this->name << endl;
	}
	~Complex()
	{
		delete this->name;
	}

	bool operator==(const Complex& another_Complex_instance)
	{
		if (this->number == another_Complex_instance.number)
		{
			if (strcmp(this->name, another_Complex_instance.name) == 0)
			{
				cout << "Equal" << endl;
				return 1;

			}
		}
		cout << "Not Equal!" << endl;
		return 0;
	}
	bool operator!=(const Complex& another_complex_instance)
	{
		if (!(*this == another_complex_instance))
		{
			cout << "Not Equal!" << endl;
			return 1;
		}
		return 0;
	}
//	int operator()(const Complex& another_complex_instance)
//	{
//		return this->number + another_complex_instance.number;
//	}
	int number;
	char * name;
};
int main()
{
	Complex complex_1 = Complex(1, "Liu, Bei");
	Complex complex_2(2, "Guan, Yu");
	complex_1.show_members();
	complex_2.show_members();
	Complex complex_3 = complex_2;

	cout << "{" << endl;
	bool return_equal = complex_3 == complex_2;
	cout << "-----return_equal----->" << return_equal << "<---------" << endl;
	cout << "}" << endl;
	cout << "{" << endl;
	return_equal = complex_1 == complex_2;
	cout << "-----return_equal----->" << return_equal << "<---------" << endl;
	cout << "}" << endl;

	cout << "{" << endl;
	bool return_not_equal = complex_3 != complex_2;
	cout << "-----return_not_equal----->" << return_not_equal << "<---------" << endl;
	cout << "}" << endl;
	cout << "{" << endl;
	 return_not_equal = complex_1 != complex_2;
	cout << "-----return_not_equal----->" << return_not_equal << "<---------" << endl;
	cout << "}" << endl;

    std::cout << "Hello World!\n"; 
}


















