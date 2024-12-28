// 32_CopyArrayInReverseOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber(string Message) {
    int x;
    do {
        cout << Message << endl;
        cin >> x;
    } while (x <= 0);
    return x;
}

int GetRandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

void CopyArrayInReversedOrder1(int arr[], int arr2[], int length) {
    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        arr2[j] = arr[i];
    }
}

void Swap(int& x, int& y) {
    int t = x;
    x = y;
    y = t;
}

void CopyArray(int arr1[], int arr2[], int length) {
    for (int i = 0; i < length; i++) {
        arr2[i] = arr1[i];
    }
}

void CopyArrayInReversedOrder2(int arr[], int arr2[], int length) {
    CopyArray(arr, arr2, length);
    for (int i = 0, j = length-1; i <= j; i++, j--) {
        Swap(arr2[i], arr2[j]);
    }
}

void CopyArrayInReversedOrder3(int arr[], int arr2[], int length) {
    for (int i = 0; i < length; i++) {
        arr2[i] = arr[length - 1 - i];
    }
}

void FillArrayWithRandomNumber(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = GetRandomNumber(1, 100);
    }
}


int main()
{
    srand((unsigned)time(NULL));
    
    int length = ReadNumber("Enter Positive Number");
    int arr[100];
    FillArrayWithRandomNumber(arr, length);
    cout << "\nArray Elements:" << endl;
    PrintArray(arr, length);
    int arr2[100];
    CopyArrayInReversedOrder3(arr, arr2, length);

    cout << "\nCopied Array Elements:" << endl;
    PrintArray(arr2, length);

    return 0;

}

