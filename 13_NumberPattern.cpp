// 13_NumberPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintNormalNumberPattern(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    PrintNormalNumberPattern(ReadNumber("Enter positive number"));
}

