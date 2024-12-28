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

void ReadRecord(vector<string>& info)
{
	string s;
	cout<<"Enter account number? ";
	getline(cin, s);
	info.push_back(s);
	
	cout<<"Enter pin code? ";
	getline(cin, s);
	info.push_back(s);
	
	cout<<"Enter your name? ";
	getline(cin, s);
	info.push_back(s);
	
	cout<<"Enter your phone? ";
	getline(cin, s);
	info.push_back(s);
	
	cout<<"Enter account balance? ";
	getline(cin, s);
	info.push_back(s);
}

stAccountData ReadClientData()
{
	stAccountData info;
	cout<<"Enter account number? ";
	getline(cin, info.AccountNumber);
	
	cout<<"Enter pin code? ";
	getline(cin, info.PinCode);
	
	cout<<"Enter your name? ";
	getline(cin, info.Name);
	
	cout<<"Enter your phone? ";
	getline(cin, info.Phone);
	
	cout<<"Enter account balance? ";
	cin>>info.Balance;
	
	return info;
}

string JoinRecordForSaving(vector<string>& v, string delemiter)
{
	string ans = "";
	int i = 0;
	for(string &x : v)
	{
		ans += x;
		i++;
		if(i<v.size())
			ans += delemiter;	
	}
	return ans;
}

string JoinRecordForSaving(stAccountData info, string delemiter)
{
	string ans = "";
	ans += info.AccountNumber + delemiter;
	ans += info.PinCode + delemiter;
	ans += info.Name + delemiter;
	ans += info.Phone + delemiter;
	ans += to_string(info.Balance);
	return ans;
}

int main()
{
	
	vector<string> v;
	ReadRecord(v);
	cout<<"Client Record for saving is: \n";
	cout<<JoinRecordForSaving(v, "#//#")<<endl;
	cout<<"----------------------------\n";
	stAccountData info = ReadClientData();
	cout<<JoinRecordForSaving(info, "#//#")<<endl;
	cout<<"----------------------------\n";
	return 0;
}