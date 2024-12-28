
#include <iostream>
#include <string>
#include <ctime>
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

int CompareDates(stDate date1, stDate date2)
{
	if((date1.year>date2.year)
	|| (date1.year==date2.year && date1.month>date2.month)
	|| (date1.year==date2.year && date1.month==date2.month&&date1.day>date2.day))
	{
		return 1;
	}
	else if(date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
	{
		return 0;
	}
	return -1;
}

stDate ReadDate()
{
	stDate date;
	cout<<"Enter day: ";
	cin>>date.day;
	
	cout<<"Enter month: ";
	cin>>date.month;
	
	cout<<"Enter year: ";
	cin>>date.year;
	
	return date;
}

bool isLastDayInMonth(short year, short month, short day)
{
	return day == MonthDays(year, month);
}

bool isLastMonthInYear(short month)
{
	return month == 12;
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


bool IsDateInPeriod(stDate periodStart, stDate periodEnd, stDate date)
{
	return (CompareDates(periodStart, date)>0 || CompareDates(periodEnd, date)<0)? false : true;
}


int main()
{
	cout<<"Read Period\n";
	cout<<"--------------\n";
	stDate period1Start = ReadDate();
	cout<<"--------------\n";
	stDate period1End = ReadDate();
	cout<<"--------------\n";
	stDate date = ReadDate();
	cout<<"--------------\n";
	cout<<IsDateInPeriod(period1Start, period1End, date);
}