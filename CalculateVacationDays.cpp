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

string weekDays[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

stDate CurrentDate()
{
	stDate date;
	time_t t = time(0);
	tm* t1 = localtime(&t);
	date.year = t1->tm_year + 1900;
	date.month = t1->tm_mon + 1;
	date.day = t1->tm_mday;
	return date;
}

short DayOrderOfWeek(short year, short month, short day)
{
	return (day + year + (year/4) - (year/100) + (year/400) + (31 * month / 12)) % 7;
}

short DayOrderOfWeek(stDate date)
{
	return DayOrderOfWeek(date.year, date.month, date.day);
}

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



short CalculateVacationDays(stDate date1, stDate date2)
{
	int n = 0;
	while(CompareDates(date1, date2)<0)
	{
		int d = DayOrderOfWeek(date1);
		if((d == 6 || d == 5))n++;
		date1 = IncreaseDateByOne(date1);
	}
	return n;
}

stDate CalculateVacationDays(stDate date1, short days)
{
	int n = 0;
	while(days--)
	{
		int d = DayOrderOfWeek(date1);
		if(d == 5 || d == 6)
		{
			days++;
		}
		date1 = IncreaseDateByOne(date1);
	}
	return date1;
}

int ReadNumber(string message)
{
	int x;
	cout<<message<<endl;
	cin>>x;
	return x;
}

int main()
{
	stDate date1;
	date1.day = ReadNumber("Enter day");
	date1.month = ReadNumber("Enter month");
	date1.year = ReadNumber("Enter year");
	stDate date2;
	date2.day = ReadNumber("Enter day");
	date2.month = ReadNumber("Enter month");
	date2.year = ReadNumber("Enter year");
	
	int compareDates = CompareDates(date1, date2);
	if(compareDates == 0)
	{
		cout<<"Date 1 is equal to date 2";
	}
	else if(compareDates == -1)
	{
		cout<<"Date 1 is less than date 2";
	}
	else
	{
		cout<<"Date 1 is greater than date 2";
	}
	
	// cout<<CalculateVacationDays(date1, date2)<<endl;
	
	// short n = ReadNumber("Enter number of vacation days: ");
	// stDate date = CalculateVacationDays(date1, n);
	// cout<<date.day<<"/"<<date.month<<"/"<<date.year<<endl;
	
}