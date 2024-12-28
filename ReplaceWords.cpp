#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 

string Replace(string s, string sToReplace, string sReplace)
{
	for(int i=0; i<s.length(); i++)
	{
		short pos = s.find(sToReplace);
		while (pos != std::string::npos)
		{
			s = s.replace(pos, sToReplace.length(), sReplace);
			pos = s.find(sToReplace);
		}
		
	}
	return s;
}

string ReplaceCaseSensetive(string s, string sToReplace, string sReplace)
{
	for(int i=0; i<s.length(); i++)
	{
		short pos = s.find(sToReplace);
		while (pos != std::string::npos)
		{
			s.erase(pos, pos+sToReplace.length());
			s.insert(pos, sReplace);
			pos = s.find(sToReplace);
		}
	}
	return s;
}

char ToUpper(char ch)
{
	return ch>='A'&&ch<='Z'?ch:ch-32;
}

string SToUpper(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		s[i] = ToUpper(s[i]);
	}
	return s;
}

string ReplaceNonCaseSensetive(string s, string sToReplace, string sReplace)
{
	string copy = SToUpper(s);
	string toReplace = SToUpper(sToReplace);
	for(int i=0; i<copy.length(); i++)
	{
		short pos = copy.find(toReplace);
		while (pos != std::string::npos)
		{
			s.erase(pos, pos+sToReplace.length());
			s.insert(pos, sReplace);
			pos = s.find(sToReplace);
		}
	}
	return s;
}


int main()
{
	cout<<Replace("Yousef", "Yousef", "Farida")<<endl;
	cout<<ReplaceCaseSensetive("Yousef", "yousef", "Farida")<<endl;
	cout<<ReplaceNonCaseSensetive("Yousef", "yousef", "Farida")<<endl;
	return 0;
}