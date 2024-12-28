// 22_RepeatedElementsCountInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stArray {
    int arr[100];
};

int ReadNumber(string Message) {
    int x;
    do {
        cout << Message << endl;
        cin >> x;
    } while (x < 0);
    return x;
}

int ReadArrayNumber(string Message) {
    int x;
    cout << Message << endl;
    cin >> x;
    return x;
}

stArray ReadArray (stArray &a, int length) {
    int x;
    cout << "\n---------------------------------\n";
    cout << "Enter array elements" << endl;
    for (int i = 0; i < length; i++) {
        cout << "Enter Number [" << i + 1 << "]" << endl;
        cin >> x;
        a.arr[i] = x;
    }
    cout << "\n---------------------------------\n";
    return a;
}

void PrintArray(stArray a, int length) {
    for (int i = 0; i < length; i++) {
        cout << a.arr[i] << "  ";
    }
    cout << endl;
}

int GetArrayNumberFrequency(int x, stArray a, int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (a.arr[i] == x) {
            counter++;
        }
    }
    return counter;
}

void PrintResult(stArray &a, int length, int numberToCheck) {
    cout << "Original Array: ";
    PrintArray(a, length);
    cout << endl;
    int xFrequency = GetArrayNumberFrequency(numberToCheck, a, length);
    cout << numberToCheck << " is repeated " << xFrequency << " times" << endl;
}

int main()
{
    stArray a;
    int length = ReadNumber("How many numbers you want to enter?");
    a = ReadArray(a, length);
    int numberToCheck = ReadArrayNumber("Enter the number you want to check");
    PrintResult(a, length, numberToCheck);
}

