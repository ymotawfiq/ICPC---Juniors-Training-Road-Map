// 30_SumOfTwoArraysToNewOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void SumOfTwoArraysInNewArray(int arr1[], int arr2[], int arr3[], int length) {
    for (int i = 0; i < length; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int ReadArrayNumber(string Message) {
    int x;
    cout << Message << endl;
    cin >> x;
    return x;
}

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

int main() {
    srand((unsigned)time(NULL));
    int length = ReadArrayNumber("How many numbers you want to fill array with?");
    int arr[100];
    int arr2[100];
    int arr3[100];
    fillArray(arr, length);
    cout << "\nArray 1 Elements: \n";
    PrintArray(arr, length);
    fillArray(arr2, length);
    cout << "\nArray 2 Elements: \n";
    PrintArray(arr2, length);
    SumOfTwoArraysInNewArray(arr, arr2, arr3, length);
    cout << "\nArray 3 Elements: \n";
    PrintArray(arr3, length);
}