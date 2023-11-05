#include <string>
#include <iostream>
using namespace std;

int main()
{
	string line;

	cout << "한 줄을 입력 : " << endl;
	getline(cin, line);
	for (int i = 0; i < line.size(); i++)
	{
		line[i] = toupper(line[i]);
	}
	cout << line;

	return 0;
}