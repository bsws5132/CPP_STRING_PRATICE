#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char str[] = "hello friends of mine.";

	char* sPtr = strstr(str, "friends");
	cout << "���� ���ڿ��� ���� �ε��� : " << sPtr - str;
	return 0;
}