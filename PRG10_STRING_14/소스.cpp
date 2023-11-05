#include <string>
#include <iostream>
using namespace std;

int main()
{
	string strg("A short string");

	cout << "인덱스 5 위치의 문자: " << strg[5] << endl;
	cout << "인덱스 8 위치의 문자: " << strg.at(8) << endl;
	return 0;
}