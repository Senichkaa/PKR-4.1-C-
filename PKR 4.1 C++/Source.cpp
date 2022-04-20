#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string readFile(string path) {
	string s;
	getline(ifstream(path), s, '\0');
	return s;
}
bool Include(const string s, const string cs)
{
	for (size_t i=0; i < s.length()-1; i++)
	{
		if (s.at(i)=='S' && s.at(i+1)=='Q' ||
			s.at(i) == 'Q' && s.at(i + 1) == 'S')
		{
			return true;
		}
	}
	return false;
}
int main()
{
	string filename = "t.txt";
	string fileContent = readFile(filename);
	string cs = "SQ";
	string ss = "QS";
	if (Include(fileContent, cs))
		cout << "yes, SQ is in file t" << endl;
	else
		cout << "no, SQ isn`t in this file" << endl;
	if (Include(fileContent, ss))
		cout << "yes, QS is in file t" << endl;
	else
		cout << "no, QS isn`t in this file" << endl;

	return 0;
}