#include <string>
#include <iostream>
using namespace std;

int main()
{
	string first, last;
	char init;

	cout << "First Name을 입력 : ";
	cin >> first;
	cout << "Last Name 입력 : ";
	cin >> last;
	cout << "이니셜을 입력 : ";
	cin >> init;

	cout << endl;
	cout << "첫 번째 형식의 Full Name: ";
	cout << first + " " + init + "." + " " + last << endl;

	cout << "두 번째 형식의 Full Name : ";
	cout << last + ", " + first + " " + init + ".";
	return 0;
}