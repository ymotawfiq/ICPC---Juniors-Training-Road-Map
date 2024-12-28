#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 

bool IsPunctuation(char c)
{
	return c=='.'||c=='?'||c=='!'||c==','||c==':'||c==';'||c=='_'||c=='-'||c=='\''||c=='"'
		||c=='/'||c=='['||c==']'||c==')'||c=='(';
}


string RemovePunctuations(string s)
{
	int i=0;
	string s1 = "";
	for(; i<s.length(); i++)
	{
		if(!ispunct(s[i]))s1 += s[i];
	}
	return s1;
}

int main()
{
	cout<<RemovePunctuations("trtrt, fdfsfs: dfasff;\n");
}