#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std; 

char ToLowerCase(char c)
{
	if(c>='A' && c<='Z')
	{
		c = c + 32;	
	}
	return c;
}

char ToUpperCase(char c)
{
	if(c>='a' && c<='z')
	{
		c = c - 32;	
	}
	return c;
}

string SmallWord(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == ' ')continue;
		s[i] = ToLowerCase(s[i]);
	}
	return s;
}

string CapitalWord(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == ' ')continue;
		s[i] = ToUpperCase(s[i]);
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
	cout<<SmallWord(s)<<endl;
	cout<<CapitalWord(s)<<endl;
	cout<<endl;
	return 0;
}