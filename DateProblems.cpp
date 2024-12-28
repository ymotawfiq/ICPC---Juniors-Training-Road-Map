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

bool isLastDayInMonth(stDate date)
{
	return date.day == MonthDays(date.year, date.month);
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

stDate IncreaseOneDay(stDate date)
{
	if(isLastDayInMonth(date) && isLastMonthInYear(date.month))
	{
		date.day = 1;
		date.month = 1;
		date.year += 1;
		return date;
	}
	else if(isLastDayInMonth(date) && !isLastMonthInYear(date.month))
	{
		date.day = 1;
		date.month += 1;
		return date;
	}
	date.day += 1;
	return date;
}

stDate IncreaseOneWeek(stDate date)
{
	for(int i=0; i<7; i++)
	{
		date = IncreaseOneDay(date);
	}
	return date;
}

stDate IncreaseXWeeks(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = IncreaseOneWeek(date);
	}
	return date;
}

stDate IncreaseOneMonth(stDate date)
{
	int monthDays = MonthDays(date.year, date.month);
	for(int i=0; i<monthDays; i++)
	{
		date = IncreaseOneDay(date);
	}
	int monthDays = MonthDays(date.year, date.month);
	if(monthDays<date.day)date.day = monthDays;
	return date;
}

stDate IncreaseOneMonthFaster(stDate date)
{
	date.month += 1;
	if(date.month>12)
	{
		date.month = 1;
		date.year += 1;
	}
	int monthDays = MonthDays(date.year, date.month);
	if(monthDays<date.day)date.day = monthDays;
	return date;
}

stDate IncreaseXMonthes(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = IncreaseOneMonthFaster(date);
	}
	return date;
}

stDate IncreaseOneYear(stDate date)
{
	date.year += 1;
	return date;
}

stDate IncreaseXYears(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = IncreaseOneYear(date);
	}
	return date;
}

stDate IncreaseXYearsFaster(stDate date, int x)
{
	date.year += x;
	return date;
}

stDate IncreaseOneDecade(stDate date)
{
	date.year += 10;
	return date;
}

stDate IncreaseXDecades(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = IncreaseOneDecade(date);
	}
	return date;
}

stDate IncreaseXDecadesFaster(stDate date, int x)
{
	date.year = date.year + (x*10);
	return date;
}

stDate IncreaseOneCentury(stDate date)
{
	date.year += 100;
	return date;
}

stDate IncreaseXCenturies(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = IncreaseOneCentury(date);
	}
	return date;
}

stDate IncreaseXCenturiesFaster(stDate date, int x)
{
	date.year = date.year + (x*100);
	return date;
}

stDate IncreaseOneMillennium(stDate date)
{
	date.year += 1000;
	return date;
}

stDate IncreaseXMillenniums(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = IncreaseOneMillennium(date);
	}
	return date;
}

stDate AddDaysToDate(stDate date, short days)
{
	int totalDays = DaysFromFirstOfYear(date) + days;
	date.month = 1;
	short monthDays = 0;
	while(true)
	{
		monthDays = MonthDays(date.year, date.month);
		if(monthDays<totalDays)
		{
			totalDays -= monthDays;
			date.month += 1;
			if(date.month>12)
			{
				date.month = 1;
				date.year++;
			}
		}
		else
		{
			date.day = totalDays;
			break; 
		}
	}
	return date;
}

stDate AddDaysToDate2(stDate date, short days)
{
	while(days--)
	{
		int monthDays = MonthDays(date.year, date.month);
		if(date.day > monthDays)
		{
			date.day = 1;
			date.month++;
			if(date.month > 12)
			{
				date.month = 1;
				date.year++;
			}
		}
		date.day++;
	}
	return date;
}

stDate AddDaysToDate3(stDate date, short days)
{
	while(days--)
	{
		date = IncreaseOneDay(date);
	}
	return date;
}

int main()
{
	stDate date;
	date.day = 1, date.month = 2, date.year = 2000;
	cout<<"Date: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	cout<<"------------------------------------\n";
	date = IncreaseOneWeek(date);
	cout<<"Date after increasing one week: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseXWeeks(date, 5);
	cout<<"Date after increasing 5 weeks: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseOneMonthFaster(date);
	cout<<"Date after increasing one month: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseXMonthes(date, 5);
	cout<<"Date after increasing 5 months: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseOneYear(date);
	cout<<"Date after increasing one year: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseXYears(date, 5);
	cout<<"Date after increasing 5 years: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseXYearsFaster(date, 5);
	cout<<"Date after increasing 5 years faster: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseOneCentury(date);
	cout<<"Date after increasing one century: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseXCenturies(date, 5);
	cout<<"Date after increasing 5 centuries faster: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseXCenturiesFaster(date, 5);
	cout<<"Date after increasing s centuries: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseOneMillennium(date);
	cout<<"Date after increasing one millennium: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = IncreaseXMillenniums(date, 5);
	cout<<"Date after increasing 5 millenniums: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	
	return 0;
}