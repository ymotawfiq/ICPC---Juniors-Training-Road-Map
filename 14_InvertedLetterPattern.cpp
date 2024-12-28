// 14_InvertedLetterPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintInvertedLetterPattern(int x) {
    for (int i = 65+x-1; i >= 65; i--) {
        for (int j = 65; j <= i; j++) {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadNumber("Enter positive number"));
}