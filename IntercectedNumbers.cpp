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

void GetIntercectedNumbers(int arr1[3][3], int arr2[3][3], int ans[3], int rows, int col)
{
	int k = 0;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(exists(arr2, arr1[i][j], rows, col))
			{
				ans[k] = arr1[i][j];
				k++;
			}
		}
	}
}

void GetIntercectedNumbers(int arr1[3][3], int arr2[3][3], int rows, int col)
{
	int k = 0;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(exists(arr2, arr1[i][j], rows, col))
			{
				cout<<arr1[i][j]<<"  ";
			}
		}
	}
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
	int arr2[rows][col];
	int ans[rows];
	Generate2dArray(arr2, rows, col);
	Generate2dArray(arr, rows, col);
	Print2dArray(arr2, rows, col);
	cout<<"\n";
	Print2dArray(arr, rows, col);
	cout<<"\n";
	cout<<"\nIntercected numbers\n";
	// GetIntercectedNumbers(arr, arr2, ans, rows, col);
	// PrintArray(ans, rows);
	GetIntercectedNumbers(arr, arr2, rows, col);
}