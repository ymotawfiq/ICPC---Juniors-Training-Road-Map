// 8_NumberFrequency.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int GetNumberFrequency(int Number, short NumberYouWantToGetFrequency) {
    int frequency = 0;
    while (Number) {
        if (Number % 10 == NumberYouWantToGetFrequency) {
            frequency++;
        }
        Number /= 10;
    }
    return frequency;
}

int main()
{
    int Number = ReadNumber("Enter Number");
    short NumberYouWantToGetFrequency = ReadNumber("Enter number you want to get frequency");
    cout << NumberYouWantToGetFrequency << " found "
        << GetNumberFrequency(Number, NumberYouWantToGetFrequency) << " times " << endl;
}

