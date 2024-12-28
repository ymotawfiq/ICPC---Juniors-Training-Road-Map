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
			cout<<"Enter element: ";
			cin>>arr[i][j];
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

void PrintArray(int arr[3], int rows)
{
	for(int i=0; i<rows; i++)
	{
		cout<<"Sum of col "<<i+1<<" = "<<arr[i]<<"\t";
		cout<<endl;
	}
}

void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void TransPoseMatrix(int arr[3][3], int arr2[3][3], int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			arr2[j][i] = arr[i][j];
		}
	}
}



int ColSum(int arr[3][3], int rows, int j)
{
	int sum = 0;
	for(int i=0; i<rows; i++)
	{
		sum += arr[i][j];
	}
	return sum;
}

int main()
{
	srand((unsigned)time(NULL));
	
	const int rows = 3;
	const int col = 3;
	int arr[rows][col] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int arr2[rows][col];
	int sum[rows];
	Print2dArray(arr, rows, col);
	TransPoseMatrix(arr, arr2, rows, col);
	cout<<endl;
	Print2dArray(arr2, rows, col);
	cout<<"\n";
}