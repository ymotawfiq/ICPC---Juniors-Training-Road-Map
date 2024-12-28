#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 

struct stAccountData
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	int Balance;
};


vector<string> Split(string s, string delemeter)
{
	vector<string> ans;
	for(int i=0; i<s.length(); i++)
	{
		short pos = s.find(delemeter);
		while (pos!=std::string::npos)
		{
			ans.push_back(s.substr(0, pos));
			s.erase(0, pos+delemeter.length());
			pos = s.find(delemeter);
		}
	}
	if(s.length()!=0)ans.push_back(s);
	return ans;
}

stAccountData RecordClientData(string s, string delemeter)
{
	stAccountData info;
	vector<string> v = Split(s, delemeter);
	info.Balance = stoi(v.back());
	v.pop_back();
	info.Phone = v.back();
	v.pop_back();
	info.Name = v.back();
	v.pop_back();
	info.PinCode = v.back();
	v.pop_back();
	info.AccountNumber = v.back();
	v.pop_back();
	return info;
}

void PrintAccountData(stAccountData &info)
{
	cout<<"Account Number: "<<info.AccountNumber<<endl;
	cout<<"Pin Code: "<<info.PinCode<<endl;
	cout<<"Name: "<<info.Name<<endl;
	cout<<"Phone: "<<info.Phone<<endl;
	cout<<"Balance: "<<info.Balance<<endl;
}


int main()
{
	
	string s = "A301#//#1234#//#Yousef Mohamed#//#01555172417#//#5000";
	stAccountData info = RecordClientData(s, "#//#");
	cout<<endl;
	cout<<"----------------------------\n";
	PrintAccountData(info);
	cout<<"----------------------------\n";
	return 0;
}