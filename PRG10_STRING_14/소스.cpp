#include <string>
#include <iostream>
using namespace std;

int main()
{
	string strg("A short string");

	cout << "�ε��� 5 ��ġ�� ����: " << strg[5] << endl;
	cout << "�ε��� 8 ��ġ�� ����: " << strg.at(8) << endl;
	return 0;
}