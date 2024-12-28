// 6_SumOfNumberDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int NumberDisitsSum(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void PrintResults(int Number) {
    cout << "Sum of digits is " << NumberDisitsSum(Number) << endl;
}


int main()
{
    PrintResults(ReadNumber("Enter Positive Number"));
}

