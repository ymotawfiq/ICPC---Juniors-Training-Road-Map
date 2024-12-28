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

bool IsIdentity(int arr[3][3], int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(i==j)
			{
				if(arr[i][j]!=1)
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

int main()
{
	srand((unsigned)time(NULL));
	
	const int rows = 3;
	const int col = 3;
	int arr[rows][col] = {{1,0,0}, {0,1,0}, {0,0,1}};
	int arr2[rows][col] = {{1,1,0}, {0,1,0}, {0,0,1}};
	//Generate2dArray(arr, rows, col);
	Print2dArray(arr2, rows, col);
	cout<<"\n";
	cout<<"\n";
	if(IsIdentity(arr2, rows, col))
	{
		cout<<"Identity"<<endl;
	}
	else
	{
		cout<<"Not Identity\n";
	}
	cout<<"\n";
}