#include <iostream>
using namespace std;

struct stDate
{
	short day;
	short month;
	short year;
};

void CompareDates(stDate date1, stDate date2)
{
	if(date1.year>date2.year
	|| (date1.year==date2.year && date1.month>date2.month)
	|| (date1.year==date2.year && date1.month==date2.month&&date1.day>date2.day))
	{
		cout<<date1.day<<"/"<<date1.month<<"/"<<date1.year<<" is not less than "
		<<date2.day<<"/"<<date2.month<<"/"<<date2.year<<endl;
	}
	else if(date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
	{
		cout<<date1.day<<"/"<<date1.month<<"/"<<date1.year<<" is equal to "
		<<date2.day<<"/"<<date2.month<<"/"<<date2.year<<endl;
	}
	else
	{
		cout<<date1.day<<"/"<<date1.month<<"/"<<date1.year<<" is less than "
		<<date2.day<<"/"<<date2.month<<"/"<<date2.year<<endl;
	}
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

bool isLastDayInMonth(short year, short month, short day)
{
	return day == MonthDays(year, month);
}

bool isLastMonthInYear(short month)
{
	return month == 12;
}

void IsLastDayLastMonth(stDate date)
{
	short monthDays = MonthDays(date.year, date.month);
	if(isLastDayInMonth(date.year, date.month, date.day) && isLastMonthInYear(date.month))
	{
		cout<<"Last Day Last Month\n";
	}
	else if(isLastDayInMonth(date.year, date.month, date.day) && !isLastMonthInYear(date.month))
	{
		cout<<"Last Day Not Last Month\n";
	}
	else if(!isLastDayInMonth(date.year, date.month, date.day) && isLastMonthInYear(date.month))
	{
		cout<<"Last Month Not Last Day\n";
	}
	else
	{
		cout<<"Not Last Month Not Last Day\n";
	}
}

stDate IncreaseDateByOne(stDate date)
{
	if(isLastDayInMonth(date.year, date.month, date.day))
	{
		date.day = 1;
		if(isLastMonthInYear(date.month))
		{
			date.month = 1;
			date.year += 1;
			return date; 	
		}
		date.month += 1;
		return date; 	
	}
	date.day += 1;
	return date; 
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
	}while(x<=0 || x>12);
	return x;
}

short ReadNumber()
{
	short x;
	do
	{
		cout<<"Enter Number: ";
		cin>>x;
	}while(x<=0 && x>366);
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
	stDate date1;
	date1.day = ReadDay();
	date1.month = ReadMonth();
	date1.year = ReadYear();
	

	date1 = IncreaseDateByOne(date1);
	cout<<date1.day<<"/"<<date1.month<<"/"<<date1.year<<endl;
	
}