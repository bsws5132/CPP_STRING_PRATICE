#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char str[] = "hello friends of mine.";

	char* sPtr = strpbrk(str, "pfmd");
	cout << "ã�� ���� : " << *sPtr << endl;
	cout << "�ش� ������ �ε��� : " << sPtr - str;
	return 0;

}