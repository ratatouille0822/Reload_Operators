#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
	friend ostream& operator<<(ostream& cout, MyString& my_string);
	friend istream& operator>>(istream& cin, MyString& my_string);

public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& my_string);
	int GetSize();

	~MyString();

	MyString& operator+(const MyString& another_mystring_instance);
	MyString& operator+(const char* str);
	char operator[](const int i);
	MyString& operator=(const MyString& another_mystring_instance);

private:
	char* pStr;
	int size;
};

ostream& operator<<(ostream& cout, MyString& my_string);
istream& operator>>(istream& cin, MyString& my_string);
