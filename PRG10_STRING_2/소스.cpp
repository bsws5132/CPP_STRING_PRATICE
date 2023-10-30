#include <iostream>
using namespace std;

int main()
{
	char str1[] = { 'H','e', 'l', 'l', 'o', '\0' };
	const char str2[] = {'H','e', 'l', 'l', 'o', '\0'};

	const char* str3 = "GoodBye";
	const char* str4 = "GoodBye \0 my Friend";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	cout << "str4 : " << str4 << endl;

	char str5[20];
	cout << "str5 input : ";
	cin >> str5;

	cout << "str5 : " << str5;
	return 0;



}