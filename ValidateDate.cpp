
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;

struct stDate
{
	short day;
	short month;
	short year;
};


bool isLeap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short YearDays(short year)
{
	return isLeap(year) ? 366 : 365;
}

short MonthDays(short year, short month)
{
	if(month==1 || month==3 || month==5 || month==7 || month==12 || month==10 || month==12)return 31;
	else if(month==2)return isLeap(year) ? 29 : 28;
	return 30;
}

short ReadYear()
{
	short year;
	do
	{
		cout<<"Enter year: ";
		cin>>year;
	}while(year<=0);
	return year;
}

short ReadMonth()
{
	short month;
	do
	{
		cout<<"Enter month: ";
		cin>>month;
	}while(!(month>=1 && month<=12));
	return month;
}

short ReadDay(short year, short month)
{
	short monthDays = MonthDays(year, month);
	short day;
	do
	{
		cout<<"Enter day: ";
		cin>>day;
	}while(day > monthDays || day < 0);
	return day;
}

stDate ReadDate()
{
	stDate date;
	date.year = ReadYear();
	date.month = ReadMonth();
	date.day = ReadDay(date.year, date.month);
	return date;
}

bool IsValidDate()
{
	stDate date;
	cout<<"Enter day: ";
	cin>>date.day;
	cout<<"Enter month: ";
	cin>>date.month;
	cout<<"Enter year: ";
	cin>>date.year;
	if(date.year<=0 || date.month<1 || date.month>12)return false;
	int montDays = MonthDays(date.year, date.month);
	if(date.day<1 || date.day>montDays)return false;
	return true;
}

void PrintDate(stDate date)
{
	cout<<"Day: "<<date.day<<"\t\tMonth: "<<date.month<<"\tYear: "<<date.year<<endl;
}

string ReadDateAsString()
{
	string s;
	cout<<"Enter date: ";
	cin>>s;
	return s;
}

vector<string> Split(string date, string delemiter)
{
	vector<string> v;
	short pos = date.find(delemiter);
	while(pos != std::string::npos)
	{
		v.push_back(date.substr(0, pos));
		date.erase(0, pos+delemiter.length());
		pos = date.find(delemiter);
	}
	if(date.length()!=0)v.push_back(date);
	return v;
}

stDate DateToStruct(string s)
{
	vector<string> v = Split(s, "/");
	stDate date;
	date.year = stoi(v.back());
	v.pop_back();
	date.month = stoi(v.back());
	v.pop_back();
	date.day = stoi(v.back());
	v.pop_back();
	return date;
}

string ReplaceWordsInString(string word, string wToReplace, string newWord)
{
	short pos = word.find(wToReplace);
	string ans = "";
	while(pos != std::string::npos)
	{
		ans.append(word.substr(0, pos));
		ans.append(newWord);
		word.erase(0, pos+wToReplace.length());
		pos = word.find(wToReplace);
	}
	if(word.length() != 0)ans.append(word);
	return ans;
}

string PrintDateFormats(stDate date, string format="dd-mm-yyyy")
{
	format = ReplaceWordsInString(format, "dd", to_string(date.day));
	format = ReplaceWordsInString(format, "mm", to_string(date.month));
	format = ReplaceWordsInString(format, "yyyy", to_string(date.year));
	return format;
}

int main()
{
	
	// stDate date = ReadDate();
	// PrintDate(date);
	// cout<<IsValidDate();
	
	// vector<string> v = Split("20/3/2003", "/");
	// for(string& s : v)
	// {
	// 	cout<<s<<endl;
	// }
	
	string date = ReadDateAsString();
	stDate d = DateToStruct(date);
	cout<<PrintDateFormats(d)<<endl;
	cout<<PrintDateFormats(d, "dd-mm-yyyy")<<endl;
	cout<<PrintDateFormats(d, "dd/mm/yyyy")<<endl;
	cout<<PrintDateFormats(d, "mm-dd-yyyy")<<endl;
	cout<<PrintDateFormats(d, "yyyy-dd-mm")<<endl;
	cout<<PrintDateFormats(d, "yyyy/dd/mm")<<endl;
	cout<<PrintDateFormats(d, "yyyy/mm/dd")<<endl;
	cout<<PrintDateFormats(d, "yyyy-mm-dd")<<endl;
	PrintDate(d);
	
	// string s = "Hello From World From";
	// cout<<ReplaceWordsInString(s, "From", "To");
	
	return 0;
}