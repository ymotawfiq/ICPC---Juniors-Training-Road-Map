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

bool IsPalindrome(int arr[3][3], int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0, k=col-1; j<=k; j++, k--)
		{
			if(arr[i][j] != arr[i][k])
			{
				return false;
			}
		}
	}
	return true;
}

bool IsPalindrome2(int arr[3][3], int rows, int col)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<col/2; j++)
		{
			if(arr[i][j] != arr[i][col-1+j])
			{
				return false;
			}
		}
	}
	return true;
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
	int arr[rows][col] = {{1,2,1}, {4,5,4}, {3,2,1}};
	//Generate2dArray(arr, rows, col);
	cout<<"\n";
	Print2dArray(arr, rows, col);
	if(IsPalindrome(arr, rows, col))
	{
		cout<<"Palindrome\n";
	}
	else
	{
		cout<<"Not palindrome\n";
	}
	
	cout<<"\n";

}