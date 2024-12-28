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

void PrintArray(int arr[3], int len)
{
	for(int i=0; i<len; i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

bool exists(int arr[3][3], int n, int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(arr[i][j] == n)
			{
				return true;
			}
		}
	}
	return false;
}

int GetMinNumber(int arr[3][3], int rows, int col)
{
	int min = INT16_MAX;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(arr[i][j]<min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}


int GetMaxNumber(int arr[3][3], int rows, int col)
{
	int max = INT16_MIN;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(arr[i][j]>max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
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
	cout<<"\n";
	Print2dArray(arr, rows, col);
	cout<<"\n";
	cout<<"Max number is: "<<GetMaxNumber(arr, rows, col)<<endl;
	cout<<"Min number is: "<<GetMinNumber(arr, rows, col)<<endl<<endl;
}