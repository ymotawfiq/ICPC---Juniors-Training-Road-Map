#include <iostream>
using namespace std;

int ReadNumber()
{
	int x;
	do
	{
		cout<<"Enter Number greater than 0: ";
		cin>>x;
	}while(x<=0);
	return x;
}


bool isLeap(int year)
{
	if(year % 400 == 0)return true;
	if(year % 100 == 0)return false;
	if(year % 4 == 0)return true;
	return false;
}

bool isLeap2(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}


int main()
{
	bool leap = isLeap(ReadNumber());
	if(leap)
	{
		cout<<"Leap\n";
	}
	else
	{
		cout<<"Not Leap\n";
	}
	
	bool leap2 = isLeap2(ReadNumber());
	if(leap2)
	{
		cout<<"Leap\n";
	}
	else
	{
		cout<<"Not Leap\n";
	}
	return 0;
}