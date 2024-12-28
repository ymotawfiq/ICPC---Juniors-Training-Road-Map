// 36_AddArrayElementsSemiDynamic.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void ReadElamensAndStoreInArray(int arr[], int &length, string Message) {
    int x;
    char ch;
    do {
        cout << Message;
        cin >> x;
        ch = ReadMoreElements("Do you want to add more elements (Y, N)? ");
        AddArrayElement(arr, length, x);
    } while (ch != 'N' && ch != 'n');
}

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  ";
    }
}


int main()
{
    int length = 0;
    int arr[100];
    ReadElamensAndStoreInArray(arr, length, "Enter Element: ");
    cout << "Array Lenght: " << length << endl;
    cout << "Array Elements" << endl;
    PrintArray(arr, length);
    cout << endl;
}
