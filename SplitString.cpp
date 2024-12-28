#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 

string ReadString()
{
	string s;
	cout<<"Enter text: ";
	getline(cin, s);
	return s;
}

void SplitString(string s, char ch)
{
	string word = "";
	for(int i=0; i<s.length()-1; i++)
	{
		if(s[i]==ch)
		{
			cout<<word<<endl;
			word = "";
		}
		else word += s[i];
		if(i+1 == s.length()-1)
		{
			word += s[i+1];
			cout<<word<<endl;
			word = "";
		}
	}
}

int FindDelemiter(string s, string d)
{
	int c=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == d[0])
		{
			if(d.length()==1)return i;
			for(int j=i; j<i+d.length()-1; j++)
			{
				if(s[j]==d[j])c++;
			}
			if(c == d.length())
			{
				return i;
			}
		}
	}
	return -1;
}

string EraseString(string s, int pos)
{
	string ans = "";
	for(int i=pos; i<s.length(); i++)
	{
		ans += s[i];
	}
	return ans;
}

string SubString(string s, int i, int j)
{
	string ans = "";
	for(int i=0; i<j; i++)ans += s[i];
	return ans;
}

vector<string> SplitString1(string s, string c)
{
	string word = "";
	vector<string> ans;
	for(int i=0; i<s.length()-1; i++)
	{
		int d = FindDelemiter(s, c);
		ans.push_back(SubString(s, i, d));
		s = EraseString(s, d+c.length());
		i = 0;
	}
	ans.push_back(s);
	return ans;
}

void PrintVector(vector<string> &v)
{
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<endl;
	}
	cout<<endl;
}

int main()
{
	vector<string> split;
	string s = ReadString();
	split = SplitString1(s, " ");
	cout<<"Tokens: "<<split.size()<<endl;
	//SplitString(s, ' ');
	PrintVector(split);
	return 0;
}