// 31_ShuffleOrderedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int GetRandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

int ReadPositiveNumber(string Message) {
    int x;
    do {
        cout << Message << endl;
        cin >> x;
    } while (x <= 0);
    return x;
}

void FillArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = i + 1;
    }
}

void Swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

void ShuffleArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        Swap(arr[GetRandomNumber(0, length-1)], arr[GetRandomNumber(0, length-1)]);
    }
}

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}

void ShuffleManyTimes(int arr[], int length, int times) {
    for (int i = 0; i < times; i++) {
        ShuffleArray(arr, length);
    }
}


int main()
{

    srand((unsigned)time(NULL));

    int arr[100];
    int length = ReadPositiveNumber("Enter positive number");
    FillArray(arr, length);

    cout << "\nArray Elements:\n";
    PrintArray(arr, length);

    int timesToShuffle = ReadPositiveNumber("\nHow many times you want to shuffle array?");

    ShuffleManyTimes(arr, length, timesToShuffle);

    cout << "\nArray Elements after " << timesToShuffle <<  " times shuffle : \n";
    PrintArray(arr, length);
    

}

