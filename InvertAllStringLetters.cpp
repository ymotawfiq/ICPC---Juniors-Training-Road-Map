#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std; 

char InvertChar(char c)
{
	if(c>='A' && c<='Z')
	{
		c = c + 32;	
	}
	else if(c>='a' && c<='z')
	{
		c = c - 32;
	}
	return c;
}

string InvertChars(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]==' ')continue;	
		s[i] = InvertChar(s[i]);
	}
	return s;
	
}

string ReadString()
{
	string s;
	cout<<"Enter text: ";
	cin>>s;
	return s;
}

int main()
{
	string s = ReadString();
	cout<<InvertChars(s)<<endl;
	cout<<endl;
	return 0;
}