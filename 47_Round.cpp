// 47_Round.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Round(double x) {
    
    double reminder = x - (int)x;
    if (reminder >= 0.5) {
        return (int)x + 1;
    }
    else if (reminder <= -0.5) {
        return (int)x - 1;
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
    double n = readNumber("Enter Number To Calculate Round");
    cout << Round(n) << endl;
    cout << round(n) << endl;
}