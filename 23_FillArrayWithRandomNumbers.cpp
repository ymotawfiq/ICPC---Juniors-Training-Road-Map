// 23_FillArrayWithRandomNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getRandom(int From, int To) {
    return rand() % (To - From + 1) + From;
}

int ReadArrayNumber(string Message) {
    int x;
    cout << Message << endl;
    cin >> x;
    return x;
}

void fillArray(int arr[100], int length) {
    
    for (int i = 0; i < length; i++) {
        arr[i] = getRandom(1, 100);
    }
}

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int length = ReadArrayNumber("How many numbers you want to fill array with?");
    int arr[100];
    fillArray(arr, length);
    cout << "Array Elements: ";
    PrintArray(arr, length);
}
