// 20_Random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enNumberStatus { SmallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialCharacter = 4 };

int getRandom(int From, int To) {
    return rand() % (To - From) + From;
}

char getRandomNumber(enNumberStatus e) {
    switch (e) {
    case enNumberStatus::CapitalLetter:
        return (char) getRandom(65, 90);
        break;
    case enNumberStatus::SmallLetter:
        return (char) getRandom(97, 122);
        break;
    case enNumberStatus::SpecialCharacter:
        return (char) getRandom(33, 47);
    case enNumberStatus::Digit:
        return (char) getRandom(48, 57);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    cout << getRandomNumber(enNumberStatus::SpecialCharacter) << endl;
}

