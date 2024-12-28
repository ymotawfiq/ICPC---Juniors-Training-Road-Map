#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

const string FileName = "ClientsData.txt";
const string Delemiter = "#//#";

struct stClient
{
	string AccountNumber, PinCode, Name, PhoneNumber;
	double AccountBalance;	
};

stClient ReadClientInfo()
{
	stClient client;
	cout<<"Enter Account Number: ";
	getline(cin>>ws, client.AccountNumber);
	
	cout<<"Enter Pin Code: ";
	getline(cin, client.PinCode);
	
	cout<<"Enter Name: ";
	getline(cin, client.Name);
	
	cout<<"Enter Phone Number: ";
	getline(cin, client.PhoneNumber);
	
	cout<<"Enter Account Balance: ";
	cin>>client.AccountBalance;
	
	return client;
}

string ConvertStructToLine(stClient& client, string delemiter)
{
	string ans = "";
	ans += client.AccountNumber + delemiter;
	ans += client.PinCode + delemiter;
	ans += client.Name + delemiter;
	ans += client.PhoneNumber + delemiter;
	ans += to_string(client.AccountBalance);
	return ans;
}

void SaveClientToFile(stClient& client, string FileName, string delemiter)
{
	fstream MyFile;
	// create file if not exists and open file in append mode
	MyFile.open(FileName, ios::out | ios::app);
	if(MyFile.is_open())
	{
		MyFile<<ConvertStructToLine(client, delemiter)<<"\n";	
		MyFile.close();
	}
}

void AddNewClient(string FileName, string delemiter)
{
	stClient client = ReadClientInfo();
	SaveClientToFile(client, FileName, delemiter);
}

char ReadChar()
{
	char ch;
	cout<<"Client saved successfullt, Do you want to add more clients(Y, N)?  ";
	cin>>ch;
	return (ch=='n'||ch=='N')?'n':'y';
}

void AddClientsToFile()
{
	char ch = 'y';
	do
	{
		system("cls");
		cout<<"\n--------------------------------------------\n";
		AddNewClient("ClientsData.txt", "#//#");
		ch = ReadChar();
	}while(ch=='y');
}

void AddAllClientsFromFileToVector(vector<string>& v, string FileName)
{
	fstream file;
	file.open(FileName, ios::in);
	if(file.is_open())
	{
		string line;
		while(getline(file, line))
		{
			v.push_back(line);
		}
	}
}

vector<string> Split(string s, string delemiter)
{
	vector<string> ans;
	for(int i=0; i<s.length(); i++)
	{
		short pos = s.find(delemiter);
		while (pos != std::string::npos)
		{
			ans.push_back(s.substr(0, pos));
			s.erase(0, pos+delemiter.length());
			pos = s.find(delemiter);
		}
	}
	if(s.length()!=0)ans.push_back(s);
	return ans;
}

stClient FileLineToStruct(string line, string delemiter)
{
	stClient st;
	vector<string> v = Split(line, delemiter);
	st.AccountNumber = v[0];
	st.PinCode = v[1];
	st.Name = v[2];
	st.PhoneNumber = v[3];
	st.AccountBalance = stod(v[4]);
	return st;
}

vector<stClient> AddAllClientsFromFileToVector(string FileName, string delemiter)
{
	vector<stClient> v;
	fstream file;
	file.open(FileName, ios::in);
	if(file.is_open())
	{
		string line;
		while(getline(file, line))
		{
			v.push_back(FileLineToStruct(line, delemiter));
		}
		file.close();
	}
	return v;
}

void PrintClientRecord(stClient s)
{
	cout<<"\n---------------------------\n";
	cout<<"Account Number: "<<s.AccountNumber<<endl;
	cout<<"Pin Code: "<<s.PinCode<<endl;
	cout<<"Name: "<<s.Name<<endl;
	cout<<"Phone Number: "<<s.PhoneNumber<<endl;
	cout<<"Account Balance: "<<s.AccountBalance<<endl;
	cout<<"---------------------------\n";	
}

void PrintVector(vector<stClient> v)
{
	cout<<"\nClients\n\n";
	for(stClient s : v)
	{
		PrintClientRecord(s);
	}
	cout<<"\n\n";
}


stClient FindClientByAccountNumber(string FileName, string AccNumber)
{
	fstream file;
	file.open(FileName, ios::in);
	stClient client;
	if(file.is_open())
	{
		string line;
		while(getline(file, line))
		{
			client = FileLineToStruct(line, Delemiter);
			if(client.AccountNumber == AccNumber)
			{
				return client;
			}
		}
		file.close();
	}
	return client;
}

void EmptyStruct(stClient& st)
{
	st.AccountBalance = 0;
	st.AccountNumber = "";
	st.Name = "";
	st.PhoneNumber = "";
	st.PinCode = "";
}

void SeedFile(vector<stClient>& st, string FileName, string delemiter, string accNum)
{
	fstream file;
	file.open(FileName, ios::out);
	if(file.is_open())
	{
		for(stClient& client:st)
		{
			if(client.AccountNumber == accNum)continue;
			string line = ConvertStructToLine(client, Delemiter);
			file<<line<<"\n";
		}
	}
}

void DeleteByAccountNumber(string FileName, string AccNumber)
{
	fstream file;
	file.open(FileName, ios::in);
	stClient client;
	vector<stClient> v = AddAllClientsFromFileToVector(FileName, Delemiter);
	for(int i=0; i<v.size(); i++)
	{
		if(AccNumber == v[i].AccountNumber)
		{
			PrintClientRecord(v[i]);
			v.erase(v.begin()+i);
		}
	}
	SeedFile(v, FileName, Delemiter, AccNumber);
}

void UpdateClientByAccountNumber(string FileName, string AccNumber, stClient newClientInfo)
{
	stClient client = FindClientByAccountNumber(FileName, AccNumber);
	DeleteByAccountNumber(FileName, AccNumber);
	SaveClientToFile(newClientInfo, FileName, Delemiter);
}

int main()
{
	// AddClientsToFile();
	
	// vector<stClient> v = AddAllClientsFromFileToVector(FileName, Delemiter);
	// cout<<v.size();
	// PrintVector(v);
	
	// stClient client = FindClientByAccountNumber(FileName, "A300");
	
	// PrintClientRecord(client);
	// DeleteByAccountNumber(FileName, "A300");	
	
	stClient newClient;
	newClient.AccountNumber = "A300";
	newClient.AccountBalance = 7000;
	newClient.Name = "yousef mohamed";
	newClient.PhoneNumber = "01555172417";
	newClient.PinCode = "0123";
	
	UpdateClientByAccountNumber(FileName, "A300", newClient);

	
	return 0;
}