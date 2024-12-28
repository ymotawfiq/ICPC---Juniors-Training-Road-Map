// 10_PrintDigitsInOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
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

void PrintNumberInOrder(int x) {
    string n = to_string(x);
    for (int i = 0; i < n.length(); i++) {
        cout << n[i] << endl;
    }
}

void PrintNumberInOrder1(int x) {
    while (x) {
        cout << x % 10 << endl;
        x /= 10;
    }
}



int main()
{
    PrintNumberInOrder1(ReverseNumber(ReadNumber("Enter Number")));
}
