// 7_ReverseNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber(string Message) {
    int x;
    do {
        cout << Message << endl;
        cin >> x;
    } while (x < 0);
    return x;
}


int ReverseNumber(int x) {
    int n = 0;
    while (x) {
        n = n * 10 + x % 10;
        x /= 10;
    }
    return n;
}

void PrintReversedNumber(int n) {
    cout << n << " after reverse is " << ReverseNumber(n) << endl;
}

int main()
{
    PrintReversedNumber(ReadNumber("Enter positive number"));
}

