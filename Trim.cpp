#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std; 

string trimLeft(string s)
{
	string ans = "";
	int i=0;
	while(ans[i]==' ')i--;
	return s.substr(i);
}

string trimRight(string s)
{
	string ans = "";
	int i = s.length();
	while(ans[i-1]==' ')i--;
	return s.substr(0, i);
}


string trim(string s)
{
	s = trimLeft(s);
	s = trimRight(s);
	return s;
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
	
	cout<<trim(ReadString())<<endl;
	//cout<<trimLeft(ReadString())<<endl;
	//cout<<trimRight(ReadString())<<endl;
	
	return 0;
}