// 35_CheckNumberInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void FillArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = GetRandomNumber(1, 100);
    }
}

int FindElementIndexInArray(int arr[], int length, int element) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

bool SearchForElementInArray(int arr[], int length, int element) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

void DisplaySearchResult(int arr[], int length, int element) {
    int found = SearchForElementInArray(arr, length, element);
    cout << "Number You are Looking for is: " << element << endl;
    if (found) {
        cout << "Yes, The number is found :-)" << found << endl;
    }
    else {
        cout << "No, The number is not found :-(" << found << endl;
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

    int length = ReadNumber("Enter Number Of Elements To Seed Array");


    int arr[100];

    FillArray(arr, length);

    cout << "Array Elements" << endl;
    PrintArray(arr, length);

    int element = ReadNumber("\n\nEnter Element You Want To Search For");

    DisplaySearchResult(arr, length, element);

}

