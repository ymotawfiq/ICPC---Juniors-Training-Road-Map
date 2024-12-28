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


void SumEachRow(int arr[3][3], int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		int rowSum = 0;
		for(int j=0; j<col; j++)
		{
			rowSum += arr[i][j];
		}
		cout<<"Sum of row "<<i+1<<" = "<<rowSum<<endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	
	const int rows = 3;
	const int col = 3;
	int arr[rows][col];
	Generate2dArray(arr, rows, col);
	Print2dArray(arr, rows, col);
	cout<<"\nThe following is sum of each row\n";
	SumEachRow(arr, rows, col);
	cout<<"\n";
}