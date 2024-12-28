#include <iostream>
using namespace std;

int ReadYear()
{
	int x;
	do
	{
		cout<<"Enter Year: ";
		cin>>x;
	}while(x<=0);
	return x;
}

int ReadMonth()
{
	int x;
	do
	{
		cout<<"Enter Month: ";
		cin>>x;
	}while(x<=0 && x>12);
	return x;
}


bool isLeap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short YearDays(short year)
{
	if(isLeap(year))return 366;
	return 365;
}

short MonthDays(short year, short month)
{
	if(month==1 || month==3 || month==5 || month==7 || month==12 || month==10 || month==12)return 31;
	else if(month==2)return isLeap(year) ? 29 : 28;
	return 30;
}

short MonthDays1(short year, short month)
{
	int month_days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	return isLeap(year) ? (month==2 ? 29 : month_days[month]) : month_days[month];
}

int YearHours(short year)
{
	return YearDays(year) * 24;
}

int MonthHours(short year, short month)
{
	return MonthDays(year, month) * 24;
}


int MonthMinutes(short year, short month)
{
	return MonthHours(year, month) * 60;
}


int MonthSeconds(short year, short month)
{
	return MonthMinutes(year, month) * 60;
}

int YearMinutes(short year)
{
	return YearHours(year) * 60;
}

int YearSeconds(short year)
{
	return YearMinutes(year) * 60;
}


int main()
{
	int year = ReadYear();
	short month = ReadMonth();
	short monthDays = MonthDays(year, month);
	cout<<"Year\n";
	cout<<"Days: "<<YearDays(year)<<endl;
	cout<<"Hours: "<<YearHours(year)<<endl;
	cout<<"Minutes: "<<YearMinutes(year)<<endl;
	cout<<"Seconds: "<<YearSeconds(year)<<endl;
	cout<<"Month\n";
	cout<<"Days: "<<MonthDays(year, month)<<endl;
	cout<<"Hours: "<<MonthHours(year, month)<<endl;
	cout<<"Minutes: "<<MonthMinutes(year, month)<<endl;
	cout<<"Seconds: "<<MonthSeconds(year, month)<<endl;
	return 0;
}