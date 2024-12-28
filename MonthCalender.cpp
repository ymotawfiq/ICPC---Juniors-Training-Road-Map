#include <iostream>
#include <iomanip>
using namespace std;

string week_days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
string months_names[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct"
, "Nov", "Dec"};

int ReadYear()
{
	int x;
	do
	{
		cout<<"Enter Year: ";
		cin>>x;
	}while(x<=0);
	return x;
}

int ReadMonth()
{
	int x;
	do
	{
		cout<<"Enter Month: ";
		cin>>x;
	}while(x<=0 && x>12);
	return x;
}

int ReadDay()
{
	int x;
	do
	{
		cout<<"Enter Day: ";
		cin>>x;
	}while(x<=0 && x>31);
	return x;
}


void getDayOrder(int year, int month, int day)
{
	int d = (day + year + (year/4) - (year/100) + (year/400) + (31 * month / 12)) % 7;
	cout<<"Day Order: "<<d<<endl;
	cout<<"Day Name: "<<week_days[d]<<endl;
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

short DayOrderOfWeek(short year, short month, short day)
{
	return (day + year + (year/4) - (year/100) + (year/400) + (31 * month / 12)) % 7;
}

void PrintMonthCalender(int year, int month)
{
	int d = DayOrderOfWeek(year, month, 1);
	printf("\n-------------------%s---------------\n\n", months_names[month].c_str());
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
	int i;
	for(i=0; i<d; i++)
	{
		cout<<"     ";
	}
	for(int j=1; j<=MonthDays(year, month); j++)
	{
		printf("%5d", j);
		i++;
		if(i == 7)
		{
			i = 0;
			cout<<endl;
		}
	}
}


int main()
{
	int y = ReadYear();
	int m = ReadMonth();
	
	PrintMonthCalender(y, m);
}