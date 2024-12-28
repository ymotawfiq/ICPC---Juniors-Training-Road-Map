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

bool IsOverlap1(stDate period1Start, stDate period1End, stDate period2Start, stDate period2End)
{
	if((CompareDates(period1Start, period2Start) == 1 && CompareDates(period1End, period2End) == 1)
	||(CompareDates(period2Start, period1Start) == 1 && CompareDates(period2End, period1End) == -1)
	||(CompareDates(period2Start, period1Start) == 1 && CompareDates(period1End, period2End) == -1)
	||CompareDates(period2Start, period1End) == 0 
	||CompareDates(period2End, period1Start) == 0
	||(CompareDates(period1Start, period2Start) == 1 && CompareDates(period1End, period2End) == -1))
	return true;
	return false;
}

bool IsOverlap2(stDate period1Start, stDate period1End, stDate period2Start, stDate period2End)
{
	if((CompareDates(period1Start, period2End) == 1)
	||(CompareDates(period2Start, period1End) == 1))
	return false;
	return true;
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

int countOverLap(stDate period1Start, stDate period1End, stDate period2Start, stDate period2End)
{
	int c = 0;
	while(CompareDates(period1Start, period1End)<0)
	{
		if(IsOverlap2(period1Start, period1End, period2Start, period2End))c++;
		period1Start = IncreaseDateByOne(period1Start);
	}
	return c;
}


int main()
{
	
	cout<<"Read Period1\n";
	cout<<"--------------\n";
	stDate period1Start = ReadDate();
	cout<<"--------------\n";
	stDate period1End = ReadDate();
	cout<<"--------------\n";
	
	cout<<"Read Period2\n";
	cout<<"--------------\n";
	stDate period2Start = ReadDate();
	cout<<"--------------\n";
	stDate period2End = ReadDate();
	cout<<"--------------\n";
	
	
	cout<<IsOverlap2(period1Start, period1End, period2Start, period2End)<<endl;
	
	return 0;
}