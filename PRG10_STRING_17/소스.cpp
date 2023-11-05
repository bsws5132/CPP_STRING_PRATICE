#include <string>
#include <iostream>
using namespace std;

int main()
{
	string strg("C++ lang is so hard");

	cout << strg.substr(8) << endl;
	cout << strg.substr(4, 12) << endl;

	return 0;
}