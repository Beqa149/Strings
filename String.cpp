#include "String.h"

// Default constructor
String::String()
{
	if (Comment)
		cout << "Default constructor\n";
	ca = new char[1];
	*ca = '\0';
}

String::String(int i)
{
	if (Comment)
		cout << "Overloaded constructor for int\n";
	char numb[11];
	_itoa(i, numb, 10);

	
	lengh = (int)strlen(numb);
	ca = new char[lengh + 1];
	strcpy(ca, numb);
}

String::String(size_t t) : String(int (t))
{
	if (Comment)
		cout << "Overloaded constructor for size_t\n";
}

String::String(double i)
{
	if (Comment)
		cout << "Overloaded constructor for double\n";
	char numb[16];
	sprintf(numb, "%g", i);
	lengh = (int)strlen(numb);
	ca = new char[lengh + 1];
	strcpy(ca, numb);
}

// Overloaded constructor
String::String(char * st)
{
	if (Comment)
		cout << "Overloaded constructor\n";
	lengh = strlen(st);
	ca = new char[lengh + 1];
	strcpy(ca, st);
}

// Copy constructor
String::String(const String & s)
{
	if (Comment)
		cout << "Copy constructor\n";
	lengh = s.lengh;
	ca = new char[lengh + 1];
	strcpy(ca, s.ca);
}

// Destructor
String::~String()
{
	if (Comment)
		cout << "Destructor\n";

	if (ca != nullptr)
		delete[] ca;
}

//Add Strings
String String::operator+(const String &st)
{
	if (Comment)
		cout << "Add Strings\n";
	char * sum = new char[lengh + st.lengh + 1];
	strcpy(sum, ca);
	strcat(sum, st.ca);
	String rez(sum);
	delete[] sum;
	return String(rez);
}
String String::operator+(const char *st)
{
	if (Comment)
		cout << "Add Strings\n";
	char * sum = new char[lengh + strlen(st) + 1];
	strcpy(sum, ca);
	strcat(sum, st);
	String rez(sum);
	delete[] sum;
	return String(rez);
}
String String::operator+(const char a)
{
	if (Comment)
		cout << "Add Strings\n";
	char * sum = new char[lengh + 2];
	strcpy(sum, ca);
	*(sum + lengh) = a;
	*(sum + lengh+1) = '\0';

	String rez(sum);
	delete[] sum;
	return String(rez);
}
String & String::operator=(const String &st)
{
	if (Comment)
		cout << "Assignment Operator\n";
	lengh = st.lengh;
	ca = new char[lengh + 1];
	strcpy(ca, st.ca);
	return *this;
}
String & String::operator+=(const String &st)
{
	if (Comment)
		cout << "+=\n";
	lengh += st.lengh;
	char * sum = new char[lengh + 1];
	strcpy(sum, ca);
	strcat(sum, st.ca);
	ca = new char[lengh + 1];
	strcpy(ca,sum);
	delete[] sum;
	return *this;

}
bool String::operator==(String &s)
{
	return strcmp(ca, s.ca) == 0;
}
bool String::operator!=(String &s)
{
	return strcmp(ca, s.ca) != 0;
}
bool String::operator<(String &s)
{
	return strcmp(ca, s.ca) == -1;
}
bool String::operator>(String &s)
{
	return strcmp(ca, s.ca) == 1;
}
bool String::operator<=(String &s)
{
	return strcmp(ca, s.ca) != 1;
}
bool String::operator>=(String &s)
{
	return strcmp(ca, s.ca) != -1;
}
char String::operator[](const int index)
{
	return index < lengh ? *(ca + index) : '\0';
}
String::operator int()
{
	return lengh;

}
char String::Getchar(int index)
{
	return index < lengh ? *(ca+index): '\0';
}
String::operator char*()
{
	return ca;
}
// Print string
void String::Print()
{
	cout << ca << endl;
}
