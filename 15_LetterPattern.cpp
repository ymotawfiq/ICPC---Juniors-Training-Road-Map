// 15_LetterPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintLetterPattern(int x) {
    for (int i = 65; i < 65+x; i++) {
        for (int j = 65; j <= i; j++) {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    PrintLetterPattern(ReadNumber("Enter positive number"));
}