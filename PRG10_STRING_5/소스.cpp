#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char str[] = "Hello friends";
	char* cPtr = strchr(str, 'e');
	*cPtr = 'E';
	cout << "ù ��° ���� ���� str : " << str << endl;

	cPtr = strrchr(str, 'e');
	*cPtr = 'E';
	cout << "�� ��° ���� ���� str : " << str << endl;
	return 0;
}