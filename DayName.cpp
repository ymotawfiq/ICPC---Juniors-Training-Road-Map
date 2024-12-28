#include <iostream>
#include <iomanip>
using namespace std;

string week_days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

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

int ReadDay()
{
	int x;
	do
	{
		cout<<"Enter Day: ";
		cin>>x;
	}while(x<=0 && x>31);
	return x;
}


void getDayOrder(int year, int month, int day)
{
	int d = (day + year + (year/4) - (year/100) + (year/400) + (31 * month / 12)) % 7;
	cout<<"Day Order: "<<d<<endl;
	cout<<"Day Name: "<<week_days[d]<<endl;
}

bool isLeap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short MonthDays(short year, short month)
{
	if(month==1 || month==3 || month==5 || month==7 || month==12 || month==10 || month==12)return 31;
	else if(month==2)return isLeap(year) ? 29 : 28;
	return 30;
}

short DayOrderOfWeek(short year, short month, short day)
{
	return (day + year + (year/4) - (year/100) + (year/400) + (31 * month / 12)) % 7;
}



int main()
{
	int y = ReadYear();
	int m = ReadMonth();
	int d = ReadDay();
	getDayOrder(y, m, d);
}