// 2_PrimeNumbersFrom1ToN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

enum enPrime { Prime = 1, NotPrime = 2 };

int ReadNumber(string Message) {
    int x;
    do {
        cout << Message << endl;
        cin >> x;
    } while (x < 2);
    return x;
}

enPrime CheckIfNumberIsPrime(int x) {
    if (x == 2) {
        return enPrime::Prime;
    }
    for (int i = 2; i <= floor(x / 2); i++) {
        if (x % i == 0) {
            return enPrime::NotPrime;
        }
    }
    return enPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int N) {
    cout << "------------------------\n";
    for (int i = 1; i <= N; i++) {
        enPrime isPrimeNumber = CheckIfNumberIsPrime(i);
        if (isPrimeNumber == enPrime::Prime) {
            cout << i << "-->";
        }
        if (i % 100 == 0) {
            cout << endl;
        }
    }
    cout << "\n------------------------\n";
}

int main()
{
    string Message = "Enter Number Greater Than Or Equal To 2";
    cout<<"To Print All Prime Numbers From 1 To this Number";
    PrintPrimeNumbersFrom1ToN(ReadNumber(Message));
}
