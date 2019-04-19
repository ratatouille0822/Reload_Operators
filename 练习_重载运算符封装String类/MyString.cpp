#include "MyString.h"
#include <stdlib.h>

MyString::MyString()
{
	this->pStr = NULL;
	this->size = 0;
}

MyString::MyString(const char* str)
{
	this->pStr = new char[strlen(str) + 1];
	this->size = strlen(str) + 1;
	strcpy(this->pStr, str);

}

MyString::MyString(const MyString& my_string)
{
	this->pStr = new char[my_string.size];
	this->size = my_string.size;
	strcpy(this->pStr, my_string.pStr);
}

int MyString::GetSize()
{
	return this->size;
}

MyString& MyString::operator=(const MyString& another_mystring_instance)
{
	if (this->pStr != NULL)
	{
		delete[] this->pStr;
		this->pStr = NULL;
		this->size = 0;
	}
	this->pStr = new char[another_mystring_instance.size];
	this->size = another_mystring_instance.size;
	strcpy(this->pStr, another_mystring_instance.pStr);
	return *this;
}

MyString::~MyString()
{
	
	delete[] this->pStr;
	
}


MyString& MyString::operator+(const MyString& another_mystring_instance)
{
	if (this->pStr != NULL)
	{
		this->pStr = (char*)realloc(this->pStr,this->size + another_mystring_instance.size - 1);
	}
	strcat(this->pStr, another_mystring_instance.pStr);
	this->size += another_mystring_instance.size -1;
	return *this;
}

MyString& MyString::operator+(const char* str)
{
	if (this->pStr != NULL)
	{
		this->pStr = (char*)realloc(this->pStr, this->size + strlen(str));
	}
	strcat(this->pStr, str);
	this->size += sizeof(str) -1;
	return *this;
}

char MyString::operator[](const int i)
{
	if (i >= 0 && i < this->size)
		return this->pStr[i];
	else
	{
		cout << "out of range" << endl;
		return 0;
	}
}

ostream& operator<<(ostream& cout, MyString& my_string)
{
	cout << my_string.pStr;
	return cout;
}

istream& operator>>(istream& cin, MyString& my_string)
{
	char temp[1024] = { 0 };
	cin>>temp;
	if (my_string.pStr != NULL)
	{
		delete[] my_string.pStr;
		my_string.pStr = new char[strlen(temp) + 1];
	}
	strcpy(my_string.pStr, temp);
	my_string.size = strlen(temp) + 1;
	return cin;
}













