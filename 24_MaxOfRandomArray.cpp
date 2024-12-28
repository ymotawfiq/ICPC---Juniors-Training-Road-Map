// 24_MaxOfRandomArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getRandom(int From, int To) {
    return rand() % (To - From + 1) + From;
}

void fillArray(int arr[100], int length) {

    for (int i = 0; i < length; i++) {
        arr[i] = getRandom(1, 100);
    }
}

int ReadArrayNumber(string Message) {
    int x;
    cout << Message << endl;
    cin >> x;
    return x;
}

int MaxNumberInArray(int arr[], int length) {
    int max = INT16_MIN;
    for (int i = 0; i < length; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int length = ReadArrayNumber("How many numbers you want to fill array with?");
    fillArray(arr, length);
    cout << "Array elements: ";
    PrintArray(arr, length);
    cout << "\nMax number in array is: " << MaxNumberInArray(arr, length);

}

