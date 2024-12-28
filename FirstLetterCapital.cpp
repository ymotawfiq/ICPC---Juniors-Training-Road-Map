#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std; 

char ToUpperCase(char c)
{
	if(c>='a' && c<='z')
	{
		c = c - 32;	
	}
	return c;
}

string FirstLetterCapital(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == ' ')continue;
		if(s[i-1]==' ')s[i] = ToUpperCase(s[i]);
		else if(i==0)
		{
			s[0] = ToUpperCase(s[0]);
		}
	}
	return s;
}

string ReadString()
{
	string s;
	cout<<"Enter text: ";
	getline(cin, s);
	return s;
}

int main()
{
	string s = ReadString();
	cout<<FirstLetterCapital(s)<<endl;
	cout<<endl;
	return 0;
}