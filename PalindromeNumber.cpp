// PalindromeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int ReverseNumber(int x) {
    int n = 0;
    while (x) {
        n = n * 10 + x % 10;
        x /= 10;
    }
    return n;
}

bool IsPalindrome(int x) {
    return x == ReverseNumber(x);
}




int main()
{
    int x = ReadNumber("Enter positive number");
    if (IsPalindrome(x)) {
        cout << x << " is a palindrome number";
    }
    else {
        cout << x << " is not a palindrome number";
    }
}

