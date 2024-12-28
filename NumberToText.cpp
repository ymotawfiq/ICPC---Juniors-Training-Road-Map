#include <iostream>
using namespace std;

int ReadNumber()
{
	int x;
	cout<<"Enter Number: ";
	cin>>x;
	return x;
}


string NumberToText(int n)
{
	if(n == 0)
	{
		return "";
	}
	if(n>=1 && n<=19)
	{
		string arr[]={"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
		"Seventeen", "Eighteen", "Nineteen"};
		return arr[n];
	}
	if(n>=20 && n<=99)
	{
		string arr[] = {"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", 
		"Eighty", "Ninety"};
		return arr[n/10] + " " + NumberToText(n%10);
	}
	if(n>=100 && n<=199)
	{
		return "One Hundred " + NumberToText(n%100);
	}
	if(n>=200 && n<=999)
	{
		return NumberToText(n/100) + " Hundred " + NumberToText(n%100);
	}
	if(n>=1000 && n<=1999)
	{
		return "One Thousand " + NumberToText(n%1000);
	}
	if(n>=2000 && n<=99999)
	{
		return NumberToText(n/1000) + " Thousand " + NumberToText(n%1000);
	}
	if(n>=100000 && n<=999999)
	{
		return NumberToText(n/100000) + " Hundred Thousand " + NumberToText(n%100000);
	}
	if(n>=1000000 && n<=999999999)
	{
		return NumberToText(n/1000000) + " Million " + NumberToText(n%1000000);
	}
	if(n>=1000000000 && n<=INT32_MIN)
	{
		return NumberToText(n/1000000000) + " Billion " + NumberToText(n%1000000000);
	}
	return "Number Is Too Big";
}


int main()
{
	int n = ReadNumber();
	cout<<NumberToText(n);
	return 0;
}