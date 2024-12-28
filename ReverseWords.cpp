#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 

string ReverseWords(string s)
{
	string ans = "";
	int i = s.length()-1, j=0;
	while(i)
	{
		while(s[i]==' ')
		{
			ans += s[i];
			i--;
		}
		j = i;
		while(s[j]!=' ')j--;
		ans += s.substr(j, i);
		i = j - 1;
	}
	return ans;
}

int main()
{
	
	cout<<ReverseWords("  Yousef        Mohamed  ");
	
	return 0;
}