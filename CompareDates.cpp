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

	CompareDates(date1, date2);
	
}