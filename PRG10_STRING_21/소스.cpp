#include <string>
#include <iostream>
using namespace std;


void reverse(string& strg);
bool isPalindrome(string& strg);

int main()
{
	string strg;

	cout << "���ڿ� �Է� : ";
	getline(cin, strg);

	if (isPalindrome(strg))
	{
		cout << strg << "�� ���Դϴ�.";
	}
	else
	{
		cout << strg << "�� ���� �ƴմϴ�.";
	}

	return 0;
}

bool isPalindrome(string& strg)
{
	string temp(strg);
	reverse(temp);
	return(temp == strg);
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