#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	// ���� ����
	const char* str1 = "Hello Alice";
	const char* str2 = "Hello John";
	const char* str3 = "Hello Besty";

	// ��ü ��
	cout << "str1, str2 �� : " << endl;
	cout << strcmp(str1, str2) << endl;
	cout << "str2, str3 �� : " << endl;
	cout << strcmp(str2, str3) << endl;

	//���� 5���ڸ� ��.
	cout << "str1, str2�� �� 5���ڸ� �� : " << endl;
	cout << strncmp(str1, str2, 5);
	return 0;
}