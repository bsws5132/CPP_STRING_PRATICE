#include <string>
#include <iostream>
using namespace std;

int main()
{
	string first, last;
	char init;

	cout << "First Name�� �Է� : ";
	cin >> first;
	cout << "Last Name �Է� : ";
	cin >> last;
	cout << "�̴ϼ��� �Է� : ";
	cin >> init;

	cout << endl;
	cout << "ù ��° ������ Full Name: ";
	cout << first + " " + init + "." + " " + last << endl;

	cout << "�� ��° ������ Full Name : ";
	cout << last + ", " + first + " " + init + ".";
	return 0;
}