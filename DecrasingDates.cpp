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

bool isFirstDayInMonth(stDate date)
{
	return date.day == 1;
}

bool isFirstMonthInYear(short month)
{
	return month == 1;
}

stDate DecreaseOneDay(stDate date)
{
	if(isFirstDayInMonth(date) && isFirstMonthInYear(date.month))
	{
		date.day = 31;
		date.month = 12;
		date.year -= 1;
		return date;
	}
	else if(isFirstDayInMonth(date) && !isFirstMonthInYear(date.month))
	{
		date.month -= 1;
		date.day = MonthDays(date.year, date.month);
		return date;
	}
	date.day -= 1;
	return date;
}

stDate DecreaseOneWeek(stDate date)
{
	for(int i=0; i<7; i++)
	{
		date = DecreaseOneDay(date);
	}
	return date;
}

stDate DecreaseXWeeks(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = DecreaseOneWeek(date);
	}
	return date;
}

stDate DecreaseOneMonth(stDate date)
{
	date.month -= 1;
	int monthDays = MonthDays(date.year, date.month);
	if(monthDays<date.day)date.day = monthDays;
	return date;
}


stDate DecreaseXMonthes(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = DecreaseOneMonth(date);
	}
	return date;
}

stDate DecreaseOneYear(stDate date)
{
	date.year += 1;
	return date;
}

stDate DecreaseXYears(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = DecreaseOneYear(date);
	}
	return date;
}

stDate DecreaseXYearsFaster(stDate date, int x)
{
	date.year -= x;
	return date;
}

stDate DecreaseOneDecade(stDate date)
{
	date.year += 10;
	return date;
}

stDate DecreaseXDecades(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = DecreaseOneDecade(date);
	}
	return date;
}

stDate DecreaseXDecadesFaster(stDate date, int x)
{
	date.year = date.year - (x*10);
	return date;
}

stDate DecreaseOneCentury(stDate date)
{
	date.year -= 100;
	return date;
}

stDate DecreaseXCenturies(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = DecreaseOneCentury(date);
	}
	return date;
}

stDate DecreaseXCenturiesFaster(stDate date, int x)
{
	date.year = date.year - (x*100);
	return date;
}

stDate DecreaseOneMillennium(stDate date)
{
	date.year -= 1000;
	return date;
}

stDate DecreaseXMillenniumsFaster(stDate date, int x)
{
	date.year -= (1000 * x);
	return date;
}

stDate DecreaseXMillenniums(stDate date, int x)
{
	for(int i=0; i<x; i++)
	{
		date = DecreaseOneMillennium(date);
	}
	return date;
}


int main()
{
	stDate date;
	date.day = 1, date.month = 1, date.year = 2000;
	cout<<"Date: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	cout<<"------------------------------------\n";
	date = DecreaseOneDay(date);
	cout<<"Date after decreasing one day: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseOneWeek(date);
	cout<<"Date after decreasing one week: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseXWeeks(date, 5);
	cout<<"Date after decreasing 5 weeks: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseOneMonth(date);
	cout<<"Date after increasing one month: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseXMonthes(date, 5);
	cout<<"Date after decreasing 5 months: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseOneYear(date);
	cout<<"Date after decreasing one year: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseXYears(date, 5);
	cout<<"Date after decreasing 5 years: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseXYearsFaster(date, 5);
	cout<<"Date after decreasing 5 years faster: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseOneCentury(date);
	cout<<"Date after decreasing one century: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseXCenturies(date, 5);
	cout<<"Date after decreasing 5 centuries faster: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseXCenturiesFaster(date, 5);
	cout<<"Date after decreasing 5 centuries: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseOneMillennium(date);
	cout<<"Date after decreasing one millennium: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseXMillenniums(date, 5);
	cout<<"Date after decreasing 5 millenniums: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	date = DecreaseXMillenniumsFaster(date, 5);
	cout<<"Date after decreasing 5 millenniums faster: "<<date.day<<" "<<date.month<<" "<<date.year<<endl;
	
	return 0;
}