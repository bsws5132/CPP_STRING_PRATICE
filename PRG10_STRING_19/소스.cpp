#include <string>
#include <iostream>
using namespace std;

int main()
{
	string strg1("hello my friends");
	string strg2("hello friends");

	cout << strg1 << "와 " << strg2 << " 비교하기: ";
	cout << strg1.compare(strg2) << endl;

	cout << "Hello와 Hello 비교: ";
	cout << strg1.compare(0, 5, strg2, 0, 5) << endl;
	
	cout << "Hello와 Hello 비교: ";
	cout << strg1.compare(0, 5, strg2) << endl;

	cout << "hel과 hell 비교 : ";
	cout << strg2.compare(0, 3, "hello", 4);
	return 0;
}