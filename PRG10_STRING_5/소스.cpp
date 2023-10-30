#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char str[] = "Hello friends";
	char* cPtr = strchr(str, 'e');
	*cPtr = 'E';
	cout << "첫 번째 변경 후의 str : " << str << endl;

	cPtr = strrchr(str, 'e');
	*cPtr = 'E';
	cout << "두 번째 변경 후의 str : " << str << endl;
	return 0;
}