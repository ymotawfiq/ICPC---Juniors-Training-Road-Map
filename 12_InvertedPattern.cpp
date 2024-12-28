// 12_InvertedPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintInvertedPattern(int x) {
    for (int i = x; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedPattern(ReadNumber("Enter positive number"));
}
