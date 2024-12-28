// 29_CopyOnlyPrimeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int getRandom(int From, int To) {
    return rand() % (To - From + 1) + From;
}

bool IsPrime(int x) {
    if (x < 2) {
        return false;
    }
    else if (x == 2) {
        return true;
    }
    for (int i = 2; i <= floor(x / 2); i++) {
        if (x % i == 0)return false;
    }
    return true;
}

void fillArray(int arr[100], int length) {

    for (int i = 0; i < length; i++) {
        arr[i] = getRandom(1, 100);
    }
}

void copyArrayPrimeNumbers(int arr1[], int arr2[], int length, int &arr2Length) {
    for (int i = 0; i < length; i++) {
        if (IsPrime(arr1[i])) {
            arr2[arr2Length] = arr1[i];
            arr2Length++;
        }
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
    int arr2Length = 0;
    int arr[100];
    int arr2[100];
    fillArray(arr, length);
    cout << "\nArray 1 Elements: \n";
    PrintArray(arr, length);
    copyArrayPrimeNumbers(arr, arr2, length, arr2Length);
    cout << "\nArray 2 Elements after coping prime numbers: \n";
    PrintArray(arr2, arr2Length);
}