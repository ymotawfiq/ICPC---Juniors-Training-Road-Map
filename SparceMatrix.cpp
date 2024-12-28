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

bool IsSparce(int arr[3][3], int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(j == col-1)
			{
				if(arr[i][j]==0)
				{
					return false;
				}
			}
			else
			{
				if(arr[i][j]!=0)
				{
					return false;
				}
			}
		}
	}
	return true;
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

bool IsSparce2(int arr[3][3], int rows, int col)
{
	int x = rows*col;
	return (CountNumber(arr, 0, rows, col)) >= (x/2);
}

int main()
{
	srand((unsigned)time(NULL));
	
	const int rows = 3;
	const int col = 3;
	int arr[rows][col] = {{0,0,1}, {0,1,1}, {0,0,1}};
	int arr2[rows][col];
	//Generate2dArray(arr, rows, col);
	Print2dArray(arr, rows, col);
	cout<<"\n";
	cout<<"\n";
	if(IsSparce2(arr, rows, col))
	{
		cout<<"Spare"<<endl;
	}
	else
	{
		cout<<"Not Spare\n";
	}
	cout<<"\n";
}