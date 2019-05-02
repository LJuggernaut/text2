#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void printStringArray(string word[], int size)
{
	for (int i = 0; i < size; i++)
		cout << word[i] << endl;
}

int main()
{
	string input,word[10];
	int size=0;
	stringstream ss;
	getline(cin, input);
	ss << input;
	while (!ss.eof())
	{
		ss >> word[size];
		size++;
	}
	printStringArray(word, size);
	for (int i = 0; i < size; i++)
	{	
		if(i == size-1)
			word[i].insert(word[i].length(), "!!");
		cout << word[i]<<" ";
	}
	system("pause");
}
