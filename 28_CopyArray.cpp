// 28_CopyArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void copyArray(int arr1[], int arr2[], int length) {
    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[i];
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
    int length = ReadArrayNumber("How many numbers you want to fill array with?");
    int arr[100];
    int arr2[100];
    fillArray(arr, length);
    cout << "\nArray 1 Elements: \n";
    PrintArray(arr, length);
    copyArray(arr, arr2, length);
    cout << "\nArray 2 Elements after copy: \n"; 
    PrintArray(arr2, length);
}