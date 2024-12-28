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

int CountEachWord(string s)
{
	string word = "";
	int c = 0;
	for(int i=0; i<s.length()-1; i++)
	{
		if(s[i]==' ')continue;
		else word += s[i];
		if(s[i+1]==' ')
		{
			c++;
			word = "";
		}
		if(i+1 == s.length()-1)
		{
			word = "";
			c++;
		}
	}
	return c;
}


int main()
{
	string s = ReadString();
	cout<<"String has "<<CountEachWord(s)<<" words"<<endl;
	return 0;
}