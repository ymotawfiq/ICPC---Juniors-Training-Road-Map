// 5_PrintDigitsInReversedOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


void ReverseNumber(int x) {
    while (x) {
        cout << x % 10 << endl;
        x /= 10;
    }
}

int getNumberCount(int x) {
    int i = 0;
    while (x) {
        i++;
        x /= 10;
    }
    return i;
}

int ReverseNumberInt(int x) {
    int n = 0;
    while (x) {
        n = n*10 + x%10;
        x /= 10;
    }
    return n;

}


int main()
{
    //ReverseNumber(ReadNumber("Enter Positive Number"));
    cout << ReverseNumberInt(ReadNumber("Enter Positive Number"));
    //cout << getNumberCount(11111);
}

