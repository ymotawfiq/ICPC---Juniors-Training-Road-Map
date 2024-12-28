
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
string holidaysInEgypt[] = {"7-1", "25-4", "16-6", "20-6", "1-5", "30-6", "25-1", "6-10"};

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

int DaysFromFirstOfYear(stDate date)
{
	int c = 0;
	stDate date2;
	date2.day = 1, date2.month = 1, date2.year = date.year;
	while(CompareDates(date2, date)<=0)
	{
		if(date2.day > MonthDays(date2.year, date2.month))
		{
			date2.day = 1;
			date2.month++;
		}
		date2.day++;
		c++;
	}
	return c;
}

bool IsEOF(string day)
{
	return day == weekDays[6];
}

bool IsًWeekend(stDate date)
{
	int d= DayOrderOfWeek(date);
	return d == 5 || d == 6;
}

string DateToStringDayMonth(stDate date)
{
	string ans = "";
	return ans.append(to_string(date.day)).append("-").append(to_string(date.month));
}


string DateToStringWithYear(stDate date)
{
	string ans = "";
	int d = DayOrderOfWeek(date);
	ans.append("Today is ").append(weekDays[d]).append(", ");
	return ans.append(to_string(date.day)).append("-").append(to_string(date.month)).append("-")
	.append(to_string(date.year));
}

bool IsBusinessDay(stDate date)
{
	return !IsًWeekend(date);
}

int DaysUntillEndOfWeek(stDate date)
{
	int dayOrder = DayOrderOfWeek(date);
	return 6 - dayOrder;
}

int DaysUntillEndOfMonth(stDate date)
{
	int monthDays = MonthDays(date.year, date.month);
	return monthDays - date.day;
}

int DaysUntillEndOfYear(stDate date)
{
	return YearDays(date.year) - DaysFromFirstOfYear(date);
}

void PrintResult()
{
	stDate date = CurrentDate();
	cout<<DateToStringWithYear(date)<<endl<<endl;
	int d = DayOrderOfWeek(date);
	bool isEFO = IsEOF(weekDays[d]);
	cout<<"Is it End Of Week? "<<endl;
	if(isEFO)
	{
		cout<<"Yes it is a weekend"<<endl;
	}
	else
	{
		cout<<"No, it is not a weekend\n";
	}
	
	bool isbusinessDay = IsBusinessDay(date);
	cout<<"Is it a business day? "<<endl;
	if(!isbusinessDay)
	{
		cout<<"No it not a business day"<<endl;
	}
	else
	{
		cout<<"Yes, it is a business day\n";
	}
	cout<<"Days untill end of week: "<<DaysUntillEndOfWeek(date)<<endl;
	cout<<"Days untill end of month: "<<DaysUntillEndOfMonth(date)<<endl;
	cout<<"Days untill end of year: "<<DaysUntillEndOfYear(date)<<endl;
}

int main()
{
	
	PrintResult();
	
	return 0;
}
