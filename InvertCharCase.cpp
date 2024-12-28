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


char ReadChar()
{
	char s;
	cout<<"Enter char: ";
	cin>>s;
	return s;
}

int main()
{
	char s = ReadChar();
	cout<<InvertChar(s)<<endl;
	cout<<endl;
	return 0;
}