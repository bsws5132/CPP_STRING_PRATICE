#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	// 문자 생성
	const char* str1 = "Hello Alice";
	const char* str2 = "Hello John";
	const char* str3 = "Hello Besty";

	// 전체 비교
	cout << "str1, str2 비교 : " << endl;
	cout << strcmp(str1, str2) << endl;
	cout << "str2, str3 비교 : " << endl;
	cout << strcmp(str2, str3) << endl;

	//앞의 5문자만 비교.
	cout << "str1, str2의 앞 5문자만 비교 : " << endl;
	cout << strncmp(str1, str2, 5);
	return 0;
}