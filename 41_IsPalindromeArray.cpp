// 41_IsPalindromeArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << "Key [" << i + 1 << "] = " << arr[i] << endl;
    }
}

bool IsPalindromeArray(int arr[], int length) {
    int k = 0, i, j;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if(arr[i] != arr[j]) {
            return false;
        }
    }
    return i == j + 1;
}

bool IsPalindromeArray2(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] != arr[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int length = ReadNumber("Enter number of elements you want to put in array");
    int arr[100] = {1,2,3,3,2,1};
    FillArray(arr, length);

    cout << "\nArray Elements\n";
    PrintArray(arr, length);

    if (IsPalindromeArray(arr, length)) {
        cout << "Array is Palindrome" << endl;
    }
    else {
        cout << "Array is not palindrome" << endl;
    }


}

