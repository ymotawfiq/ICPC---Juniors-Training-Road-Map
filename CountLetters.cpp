#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std; 

bool IsCapital(char ch)
{
	return ch>='A' && ch<='Z';
}

bool IsSmall(char ch)
{
	return ch>='a' && ch<='z';
}

bool IsChar(char ch)
{
	return IsCapital(ch) || IsSmall(ch);
}

string ReadString()
{
	string s;
	cout<<"Enter text: ";
	getline(cin, s);
	return s;
}

char ReadChar()
{
	char s;
	cout<<"Enter char: ";
	cin>>s;
	return s;
}

int CountCharFrequency(string s, char ch)
{
	int f=0;
	for(int i=0; i<s.length(); i++)
	{
		if(ch == s[i])f++;
	}
	return f;
}

char ToLower(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		ch += 32;
	}
	return ch;
}

int CountCharFrequencyIgnoreCase(string s, char ch)
{
	int f=0;
	for(int i=0; i<s.length(); i++)
	{
		if(ToLower(ch) == ToLower(s[i]))f++;
	}
	return f;
}

int main()
{
	string s = ReadString();
	cout<<s<<endl;
	char ch = ReadChar();
	cout<<ch<<" case sensetive frequency in ("<<s<<") is "<<CountCharFrequency(s, ch)<<endl;
	cout<<ch<<" ignoring case frequency in ("<<s<<") is "<<CountCharFrequencyIgnoreCase(s, ch)<<endl;
	return 0;
}