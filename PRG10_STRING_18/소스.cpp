#include <string>
#include <iostream>
using namespace std;

int main()
{
	string text, word;
	string delimtier(" \n");
	string::size_type wStart, wEnd;
	string::size_type npos = -1;

	cout << "�� �� �Է� : " << endl;
	getline(cin, text);

	cout << "������ �ܾ�: " << endl;
	wStart = text.find_first_not_of(delimtier, 0);
	while (wStart < npos)
	{
		wEnd = text.find_first_of(delimtier, wStart);
		cout << text.substr(wStart, wEnd - wStart) << endl;
		wStart = text.find_first_not_of(delimtier, wEnd);
	}
	return 0;
}