#include <string>
#include <iostream>
using namespace std;

int main()
{
	string strg1;
	string strg2(5, 'a');
	string strg3("Hello Friends");
	string strg4("Hi People", 4);

	cout << "strg1 < strg2: " << boolalpha << (strg1 < strg2);
	cout << endl;

	cout << "strg2 => strg3: " << boolalpha << (strg1 < strg2);
	cout << endl;

	cout << "strg1 == strg2: " << boolalpha << (strg1 == strg2);
	cout << endl;
	cout << "Hi P != strg4: " << boolalpha << ("Hi P" != strg4);

	return 0;
}