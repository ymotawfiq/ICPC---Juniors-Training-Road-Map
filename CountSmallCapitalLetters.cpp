#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std; 

enum enWhatToCount {SmallLetters=1, CapitalLetters=2, All=3};

int ReadNumber()
{
	int x;
	do
	{
		cout<<"Choose What do you want to count (1)Small letters (2)Capital letters (3)All? ";
		cin>>x;
	}while(x<1 || x>3);
	return x;
}

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

int CountSmallLetters(string s)
{
	int c = 0;
	for(int i=0; i<s.length(); i++)
	{
		if(IsSmall(s[i]))c++;
	}
	return c;
}

int CountCapitalLetters(string s)
{
	int c = 0;
	for(int i=0; i<s.length(); i++)
	{
		if(IsCapital(s[i]))c++;
	}
	return c;
}

void CountCapitalSmallLetters(string s)
{
	int ca = 0, sm = 0;
	for(int i=0; i<s.length(); i++)
	{
		if(!IsChar(s[i]))continue;
		if(IsCapital(s[i]))ca++;
		else sm++;
	}
	cout<<"\nNumber of capital letters is: "<<ca<<endl;
	cout<<"\nNumber of small letters is: "<<sm<<endl;
}

int Count(string s, enWhatToCount e)
{
	if(e==enWhatToCount::SmallLetters)
	{
		return CountSmallLetters(s);
	}
	else if(e == enWhatToCount::CapitalLetters)
	{
		return CountCapitalLetters(s);	
	}
	return s.length();
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
	CountCapitalSmallLetters(s);
	int n = ReadNumber();
	cout<<Count(s, (enWhatToCount)n);
	cout<<endl;
	return 0;
}