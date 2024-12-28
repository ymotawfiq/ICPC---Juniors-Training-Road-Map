#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std; 

void FirstCharOfEachWord(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		if(i == 0 && s[i]!=' ')
		{
			cout<<s[0]<<"  ";
		}
		else if(s[i]!=' ' && s[i-1]==' ')
		{
			cout<<s[i]<<"  ";
		}
		else if(s[i]==' ')
		{
			continue;
		}
	}
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
	FirstCharOfEachWord(s);
	cout<<endl;
	return 0;
}