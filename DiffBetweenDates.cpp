
#include <iostream>
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

int CompareDates(stDate date1, stDate date2)
{
	if(date1.year>date2.year
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

int DeffBetweenTwoDates(stDate date1, stDate date2, char includeEndDay)
{
	int c = 0;
	while(CompareDates(IncreaseDateByOne(date1), date2)<=0)
	{
		if(date1.month == 12 && date1.day == 31)
		{
			date1.month = 1;
			date1.year++;
			date1.day = 1;
			c++;
			continue;
		}
		if(MonthDays(date1.year, date1.month) == date1.day)
		{
			date1.month++;
			date1.day = 1;
			c++;
			continue;
		}
		date1.day++;
		c++;
	}
	if(includeEndDay == 'y')return ++c;
	return c;
}

int DeffBetweenTwoDates1(stDate date1, stDate date2, char includeEndDay)
{
	int c = 0;
	while(CompareDates(date1, date2)<0)
	{
		date1 = IncreaseDateByOne(date1);
		c++;
	}
	if(includeEndDay == 'y')return ++c;
	return c;
}

int DeffBetweenTwoDatesNegative(stDate date1, stDate date2, char includeEndDay)
{
	int c = 0;
	while(CompareDates(date2, date1)<0)
	{
		date2 = IncreaseDateByOne(date2);
		c++;
	}
	if(includeEndDay == 'y')return ++c * -1;
	return c * - 1;
}

int DeffBetweenTwoDatesGeneric(stDate date1, stDate date2, char includeEndDay)
{
	int c = 1;
	if(CompareDates(date1, date2)<0)
	{
		return DeffBetweenTwoDates1(date1, date2, includeEndDay);
	}
	return DeffBetweenTwoDatesNegative(date1, date2, includeEndDay);
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
	stDate date2;
	date2.day = ReadDay();
	date2.month = ReadMonth();
	date2.year = ReadYear();
	char b;
	cout<<"Do you want to include end day(y, n)? ";
	cin>>b;
	b = b=='n'||b=='N'?'n':'y';
	cout<<DeffBetweenTwoDates(date1, date2, b)<<endl;
	cout<<DeffBetweenTwoDatesGeneric(date1, date2, b)<<endl;
	return 0;
}