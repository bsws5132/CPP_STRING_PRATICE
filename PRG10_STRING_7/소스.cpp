#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char str[] = "hello friends of mine.";

	char* sPtr = strpbrk(str, "pfmd");
	cout << "찾은 문자 : " << *sPtr << endl;
	cout << "해당 문자의 인덱스 : " << sPtr - str;
	return 0;

}