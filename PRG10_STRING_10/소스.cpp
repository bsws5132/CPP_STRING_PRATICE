#define _CRT_SECURE_NO_WARNINGS 

#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char str[] = "2020�� 12�� 09��";
	char* p;

	p = strtok(str, " ");
	while (p)
	{
		cout << p << endl;
		p = strtok(0, " ");
	}

	return 0;
}