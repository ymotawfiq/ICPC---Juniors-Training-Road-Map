// 3_PerfectNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool IsNumberDivideBy(int Number, int i) {
    return Number % i == 0 && Number != i;
}

int SumOfNumbersDividedByNumber(int Number) {
    int sum = 0;
    for (int i = 1; i < Number; i++) {
        if (IsNumberDivideBy(Number, i)) {
            sum += i;
        }
    }
    return sum;
}

bool IsPerfectNumber(int Number) {
    return Number == SumOfNumbersDividedByNumber(Number);
}

void PrintResult(int Number) {
    if (IsPerfectNumber(Number)) {
        cout << Number << " is perfect number" << endl;
    }
    else {
        cout << Number << " is not perfect number" << endl;
    }
}


int main()
{
    PrintResult(ReadNumber("Enter Positive Number"));
}

