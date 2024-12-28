// 39_CopyPrimeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int GetRandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}


int ReadNumber(string Message) {
    int x;
    do {
        cout << Message << endl;
        cin >> x;
    } while (x <= 0);
    return x;
}


bool IsPrime(int x) {
    if (x < 2) {
        return false;
    }
    else if (x == 2) {
        return true;
    }
    for (int i = 2; i <= floor(x / 2); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void FillArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = GetRandomNumber(1, 100);
    }
}

void AddArrayElement(int arr[], int& length, int element) {
    arr[length] = element;
    length++;
}

void CopyArray(int arr1[], int arr2[], int arr1Length, int& arr2Length) {
    for (int i = 0; i < arr1Length; i++) {
        if (IsPrime(arr1[i])) {
            AddArrayElement(arr2, arr2Length, arr1[i]);
        }
    }
}

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << "Key [" << i + 1 << "] = " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1Length = ReadNumber("Enter Number Of Elements");
    int arr2Length = 0;
    int arr1[100], arr2[100];

    FillArray(arr1, arr1Length);

    cout << "\nArray 1 Elements\n";
    PrintArray(arr1, arr1Length);

    CopyArray(arr1, arr2, arr1Length, arr2Length);

    cout << "\nArray 2 Elements\n";
    PrintArray(arr2, arr2Length);


}
