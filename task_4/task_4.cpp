//Ќаписать программу, котора€ выводит в консоль таблицу Escape-последовательностей

#include<iostream>
using namespace std;

int main()
{
	cout << "\tEscape sequences\n";
	cout << " \\a\tBell Alert\n";
	cout << " \\b\tBackspace\n";
	cout << " \\n\tNew line\n";
	cout << " \\r\tCarriage return\n";
	cout << " \\t\tHorizontal tab\n";
	cout << " \\\\\tBackslash \\\n";
	cout << " \\\"\tDouble quotation mark\n";
	cout << " \\'\tSingle quotation mark\n";

	return 0;
}