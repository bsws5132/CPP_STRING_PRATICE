#define _CRT_SECURE_NO_WARNINGS 

#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char str1[20] = "this is ";
	const char* str2 = "a string";

	strcat(str1, str2);

	cout << "str1 : " << str1 << endl;

	char str3[20] = "abcdefghijk";
	const char* str4 = "ABCDEFGHIJK";

	strncat(str3, str4, 4);

	cout << "str3 : " << str3 << endl;
}