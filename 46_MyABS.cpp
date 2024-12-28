// 46_MyABS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ABS(int x) {
    return x < 0 ? -1 * x : x;
}

int readNumber(string Message) {
    int x;
    cout << Message << endl;
    cin >> x;
    return x;
}

int main()
{
    int n = readNumber("Enter Number To Calculate Absolute");
    cout << ABS(n) << endl;
    cout << abs(n) << endl;
}

