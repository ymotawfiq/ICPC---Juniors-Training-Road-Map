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

char ToLower(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		return ch + 32;
	}
	return ch;
}

bool IsVowel(char ch)
{
	char lower = ToLower(ch);
	return lower=='a' || lower=='e' || lower == 'i' 
		|| lower=='o' || lower == 'u';
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
	char ch = ReadChar();
	if(IsVowel(ch))
	{
		cout<<"Vowel"<<endl;
	}
	else
	{
		cout<<"Not vowel"<<endl;
	}
	return 0;
}