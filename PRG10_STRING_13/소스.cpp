#include <string>
#include <iostream>
using namespace std;

int main()
{
	string strg;

	cout << "�� �� �Է� : " << endl;
	getline(cin, strg);
	cout << strg << endl << endl;

	cout << "���� �� �Է� : " << endl;
	getline(cin, strg, '$');
	cout << strg;
	return 0;
}