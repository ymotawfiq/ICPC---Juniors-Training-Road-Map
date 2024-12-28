#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std; 

string ReadString()
{
	string s;
	cout<<"Enter text: ";
	getline(cin, s);
	return s;
}

void PrintEachWord(string s)
{
	string word = "";
	for(int i=0; i<s.length()-1; i++)
	{
		if(s[i]==' ')continue;
		else word += s[i];
		if(s[i+1]==' ')
		{
			cout<<word<<endl;
			word = "";
		}
		if(i+1 == s.length()-1)
		{
			word += s[i+1];
			cout<<word<<endl;
			word = "";
		}
	}
}


int main()
{
	string s = ReadString();
	PrintEachWord(s);
	return 0;
}