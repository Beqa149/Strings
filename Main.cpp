#include "String.h"

bool String::Comment = true;

int main()
{
	{
		String S;
		S.Print();

		String S1("Hello world");
		S1.Print();
		char a = S1.Getchar(0);

		cout << "a = " << a << endl;
		cout << S1[0] << endl;
		String S2(" From Georegia");
		S2.Print();
		//(S1 += S2).Print();
		cout << (char *)S1 << endl;

		String S3 = S1 + " From Zimbabve";
		cout << (char*)S3 << endl;

		String S4(125);
		S4.Print();
		String A("AAA");
		String B("BBB");
		cout << ((A >= B) ? "True" : "False") << endl;

		cout <<(char*)(S1 + 'X')<< endl;
	}

	cin.get();
	return 0;
}