#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	const char* str1 = "Hello my Friends.";
	char str2[] = "This is the Second string";

	cout << "str1�� �ε��� 6�� ��ġ�ϴ� ����: " << str1[6] << endl;
	str2[0] = 't';
	cout << "���� ���� str2: " << str2;
	return 0;

}