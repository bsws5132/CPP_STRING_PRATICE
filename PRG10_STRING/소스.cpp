#define _CRT_SECURE_NO_WARNINGS 

#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str1[] = "This is the first string";
	char str2[] = "This is the Second string";
	strcpy(str1, str2);

	cout << " str1 : " << str1 << endl;

	char str3[] = "abcdefghijk";
	const char* str4 = "ABCDEFGHIJK";
	strncpy(str3, str4, 4);
	cout << "str3: " << str3 << endl;

	return 0;
}

//��Ÿ�� ������ �������� ���������� ��µ�.