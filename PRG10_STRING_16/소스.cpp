#include <string>
#include <iostream>
using namespace std;

void reverse(string& strg);

int main()
{
	string strg;

	cout << "���ڿ� �Է� : ";
	getline(cin, strg);
	cout << "���� ���ڿ� : " << strg << endl;

	reverse(strg);
	cout << "������ ���ڿ� : " << strg;
	return 0;
}

void reverse(string& strg)
{
	string temp(strg);
	int size = strg.size();
	for (int i = 0; i < size; i++)
	{
		strg[i] = temp[size - 1 - i];
	}
}