// 48_Floor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Floor(double x) {
    if (x < 0) {
        return (int)--x;
    }
    return (int)x;
}

double readNumber(string Message) {
    double x;
    cout << Message << endl;
    cin >> x;
    return x;
}

int main()
{
    double n = readNumber("Enter Number To Calculate Floor");
    cout << Floor(n) << endl;
    cout << floor(n) << endl;
}