// 40_CopyDistinctNumbersToArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


char ReadMoreElements(string Message) {
    char ch;
    cout << Message;
    cin >> ch;
    if (ch != 'N' && ch != 'n') {
        return 'Y';
    }
    return ch;
}

void AddArrayElement(int arr[], int& length, int element) {
    arr[length] = element;
    length++;
}

void ReadElamensAndStoreInArray(int arr[], int& length, string Message) {
    int x;
    char ch;
    do {
        cout << Message;
        cin >> x;
        ch = ReadMoreElements("Do you want to add more elements (Y, N)? ");
        AddArrayElement(arr, length, x);
    } while (ch != 'N' && ch != 'n');
}



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


bool IsElementFoundInArray(int arr[], int length, int x) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int CalculateElementFrequencyInArray(int arr[], int length, int x) {
    int f = 0;
    if (IsElementFoundInArray(arr, length, x)) {
        for (int i = 0; i < length; i++) {
            if (arr[i] == x) {
                f++;
            }
        }
        return f;
    }
    return -1;
}

bool IsDistinct(int arr[], int length, int x) {
    return CalculateElementFrequencyInArray(arr, length, x) == 1;
}

void FillArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = GetRandomNumber(1, 100);
    }
}

void CopyArray(int arr1[], int arr2[], int arr1Length, int& arr2Length) {
    for (int i = 0; i < arr1Length; i++) {
        if (!IsElementFoundInArray(arr2, arr2Length, arr1[i])) {
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

    //int arr1Length = ReadNumber("Enter Number Of Elements");
    int arr1Length = 0;
    int arr2Length = 0;
    int arr1[100], arr2[100];

    ReadElamensAndStoreInArray(arr1, arr1Length, "Enter Element: ");

    // FillArray(arr1, arr1Length);

    cout << "\nArray 1 Elements\n";
    PrintArray(arr1, arr1Length);

    CopyArray(arr1, arr2, arr1Length, arr2Length);

    cout << "\nArray 2 Elements\n";
    PrintArray(arr2, arr2Length);


}