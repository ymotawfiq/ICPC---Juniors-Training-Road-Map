// 4_PerfectNumberFrom1ToN.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintResults(int Number) {
    for (int i = 1; i <= Number; i++) {
        if (IsPerfectNumber(i)) {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintResults(ReadNumber("Enter Positive Number"));
}
