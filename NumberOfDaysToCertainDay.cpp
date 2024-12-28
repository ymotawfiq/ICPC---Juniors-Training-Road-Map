#include <iostream>
using namespace std;

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

short NumberOfDaysFrom1JanToCertainDay(short year, short month, short day)
{
	int n = 0;
	for(int i=1; i<month; i++)
	{
		n += MonthDays(year, i);
	}	
	n += day;
	return n;
}

short ReadYear()
{
	short x;
	do
	{
		cout<<"Enter Year: ";
		cin>>x;
	}while(x<=0);
	return x;
}

short ReadMonth()
{
	short x;
	do
	{
		cout<<"Enter Month: ";
		cin>>x;
	}while(x<=0 && x>12);
	return x;
}

short ReadDay()
{
	short x;
	do
	{
		cout<<"Enter Day: ";
		cin>>x;
	}while(x<=0 && x>31);
	return x;
}

int main()
{
	int y = ReadYear();
	int m = ReadMonth();
	int d = ReadDay();
	cout<< "Number of days from beginning of th year is: " <<
		NumberOfDaysFrom1JanToCertainDay(y, m, d)<<endl;
}
