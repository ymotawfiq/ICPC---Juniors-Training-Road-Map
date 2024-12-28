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
	int arr[rows][col] = {{0,0,1}, {0,1,1}, {0,0,1}};
	int arr2[rows][col];
	Generate2dArray(arr2, rows, col);
	Print2dArray(arr2, rows, col);
	cout<<"\n";
	cout<<"\n";
	int n = ReadNumber();
	if(exists(arr2, n, rows, col))
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"Not found\n";
	}
	cout<<"\n";
}