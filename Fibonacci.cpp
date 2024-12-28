#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std; 


double FibRecursion(short x)
{
	if(x == 0 || x == 1)
	{
		return 1;
	}
	return FibRecursion(x-1)+FibRecursion(x-2);
}


double FibIteration(short x)
{
	if(x<2)
	{
		return 1;
	}
	double a = 1, b = 1, c = 0;
	for(int i=2; i<=x; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

void FibSeries(short x)
{
	if(x == 0)
	{
		cout<<1<<"  ";
		return;
	}
	else if(x == 1)
	{
		cout<<1<<"  "<<1<<"  ";
		return;
	}
	double a = 1, b = 1, c = 0;
	cout<<a<<"  "<<b<<"  ";
	for(int i=2; i<=x; i++)
	{
		c = a + b;
		cout<<c<<"  ";
		a = b;
		b = c;
	}
}

short ReadNumber()
{
	int x;
	do
	{
		cout<<"Enter number to calc fib less than or equal 1000: ";
		cin>>x;
	}while(x>1000 || x<0);
	return x;
}

int main()
{
	int n = ReadNumber();
	cout<<"\n";
	cout<<"Using loop: "<<FibIteration(n)<<endl;
	cout<<"Using recursion: "<<FibRecursion(n)<<endl;
	cout<<"\n";
	FibSeries(n);
	cout<<"\n\n";
	return 0;
}