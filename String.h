#pragma once

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
	char * ca = nullptr;
	int lengh = 0;

	static bool Comment;
public:

	String();
	String(int);
	String(size_t);
	String(double);
	String(char *);
	String(const String &);
	~String();

	//Add Strings
	String operator + (const String &);

	//Add Char * To String
	String operator + (const char *);

	//Add Char To String
	String operator +(const char);

	//Assignment Operator
	String & operator =(const String &);

	//Overloaded += Operator
	String & operator +=(const String &);

	//Overloaded == Operator
	bool operator ==(String &);

	//Overloaded != Operator
	bool operator !=(String &);

	//Overloaded < Operator
	bool operator <(String &);

	//Overloaded > Operator
	bool operator >(String &);

	//Overloaded <= Operator
	bool operator <=(String &);

	//Overloaded >= Operator
	bool operator >=(String &);

	//Index Operator
	char operator [] (const int);

	//Convert To int
	operator int();

	//Return Character
	char Getchar(int);
	operator char *();
	void Print();


};