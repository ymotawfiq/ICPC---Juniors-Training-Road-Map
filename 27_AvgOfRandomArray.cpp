// 27_AvgOfRandomArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

float AvgOfArray(int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return (float) sum / length;
}

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

int main() {
    int length = ReadArrayNumber("How many numbers you want to fill array with?");
    int arr[100];
    fillArray(arr, length);
    cout << "\n Array Elements: ";
    PrintArray(arr, length);
    cout << "\n Average Of Array is: " << AvgOfArray(arr, length) << "\n";
}