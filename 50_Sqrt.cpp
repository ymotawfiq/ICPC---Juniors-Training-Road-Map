// 50_Sqrt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Sqrt(int x) {
    if (x == 4)return 2;
    for (int i = 1; i <= x / 4; i++) {
        if (x == i * i)return i;
    }
    return -1;

}

double readNumber(string Message) {
    double x;
    cout << Message << endl;
    cin >> x;
    return x;
}

int main()
{
    double n = readNumber("Enter Number To Calculate Sqrt");
    cout << Sqrt(n) << endl;
    cout << sqrt(n) << endl;
}