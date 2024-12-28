// 21_GenerateKeys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enChars{ SmallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialCharacter = 4 };

int getRandom(int From, int To) {
    return rand() % (To - From) + From;
}

char getRandomNumber(enChars e) {
    switch (e) {
    case enChars::CapitalLetter:
        return (char)getRandom(65, 90);
        break;
    case enChars::SmallLetter:
        return (char)getRandom(97, 122);
        break;
    case enChars::SpecialCharacter:
        return (char)getRandom(33, 47);
    case enChars::Digit:
        return (char)getRandom(48, 57);
    }
}

string GenerateWord(enChars e, short length) {
    string word = "";
    for (int i = 0; i < length; i++) {
        word += (char)getRandomNumber(e);
    }
    return word;
}

string GenerateKey(int length) {
    string key = "";
    for (int i = 1; i <= length; i++) {
        key += GenerateWord(enChars::CapitalLetter, 4);
        if (i < 4) {
            key += "-";
        }
    }
    return key;
}

int ReadNumber(string Message) {
    int x;
    do {
        cout << Message << endl;
        cin >> x;
    } while (x < 0);
    return x;
}

void GenerateKeys(short n) {
    for (int i = 1; i <= n; i++) {
        cout << "Key [" << i << "] --> " << GenerateKey(4) << endl;
    }
}


int main()
{
    srand((unsigned)time(NULL));
    GenerateKeys(ReadNumber("Enter Number Of Keys you Want To Generate"));
}

