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

string ReadString()
{
	string s;
	cout<<"Enter text: ";
	getline(cin, s);
	return s;
}

int CountOfVowelChars(string s)
{
	int c = 0;
	for(int i=0; i<s.length(); i++)
	{
		if(IsVowel(s[i])){
			c++;
		}
	}
	return c;
}

void PrintVowels(string s)
{
	cout<<"\nVowels in string is: ";
	for(int i=0; i<s.length(); i++)
	{
		if(IsVowel(s[i])){
			cout<<s[i]<<"  ";
		}
	}
	cout<<endl;
}

int main()
{
	string s = ReadString();
	PrintVowels(s);
	cout<<endl;
	cout<<"Count of vowel chars in ("<<s<<") = "<<CountOfVowelChars(s)<<endl;
	return 0;
}