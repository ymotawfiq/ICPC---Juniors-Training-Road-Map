#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std; 

int GetRandomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void Generate2dArray(int arr[3][3], int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			arr[i][j] = GetRandomNumber(1, 100);
		}
	}
}

void Print2dArray(int arr[3][3], int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<setw(3)<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int CountNumber(int arr[3][3], int n, int rows, int col)
{
	int c = 0;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(arr[i][j]==n)
			{
				c++;
			}
		}
	}
	return c;
}

int ReadNumber()
{
	int x;
	cout<<"Enter number: ";
	cin>>x;
	return x;
}

int main()
{
	srand((unsigned)time(NULL));
	
	const int rows = 3;
	const int col = 3;
	int arr[rows][col];
	Generate2dArray(arr, rows, col);
	Print2dArray(arr, rows, col);
	cout<<"\n";
	int n = ReadNumber();
	int c = CountNumber(arr, n, rows, col);
	if(c!=0)
	{
		cout<<"Count of number "<<n<<" in array is "<<c<<endl;
	}
	else
	{
		cout<<"Number "<<n<<" not found"<<endl;
	}
	cout<<"\n";
}