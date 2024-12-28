// 49_Ceil.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Ceil(double x) {
    double reminder = x - (int)x;
    if (x < 0 && reminder<=-0.1) {
        return (int)++x;
    }
    return reminder >= 0.1 ? (int)++x : x;
}

double readNumber(string Message) {
    double x;
    cout << Message << endl;
    cin >> x;
    return x;
}

int main()
{
    double n = readNumber("Enter Number To Calculate Ceil");
    cout << Ceil(n) << endl;
    cout << ceil(n) << endl;
}