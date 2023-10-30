#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	const char* str1 = "Hello my Friends.";
	char str2[] = "This is the Second string";

	cout << "str1의 인덱스 6에 위치하는 문자: " << str1[6] << endl;
	str2[0] = 't';
	cout << "변경 후의 str2: " << str2;
	return 0;

}