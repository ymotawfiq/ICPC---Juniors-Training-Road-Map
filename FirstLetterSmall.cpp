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

string FirstLetterSmall(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == ' ')continue;
		if(s[i-1]==' ')s[i] = ToLowerCase(s[i]);
		else if(i==0)
		{
			s[0] = ToLowerCase(s[0]);
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
	cout<<FirstLetterSmall(s)<<endl;
	cout<<endl;
	return 0;
}