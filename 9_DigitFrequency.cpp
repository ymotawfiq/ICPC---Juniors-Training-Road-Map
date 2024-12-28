// 9_DigitFrequency.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


void FrequencyResult(int Number) {
    int arr[10] = {0};
    while (Number) {
        int curr = Number % 10;
        if (arr[curr] != 1) {
            cout << curr << " frequency is " <<
                GetNumberFrequency(Number, curr) << " times" << endl;
            arr[curr] = 1;
            Number /= 10;
        }
        else {
            Number /= 10;
        }
    }
}


int main()
{
    FrequencyResult(ReadNumber("Enter positive number"));
}
