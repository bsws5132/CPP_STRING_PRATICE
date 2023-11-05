#include <string>
#include <iostream>
using namespace std;

int main()
{
	string strg;

	cout << "한 줄 입력 : " << endl;
	getline(cin, strg);
	cout << strg << endl << endl;

	cout << "여러 줄 입력 : " << endl;
	getline(cin, strg, '$');
	cout << strg;
	return 0;
}