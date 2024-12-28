// 16_AllWordsFromAToZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void PrintAllWordsFromAToZ() {

    for (char i = 'A'; i <= 'Z'; i++) {
        for (char j = 'A'; j <= 'Z'; j++) {
            for (char k = 'A'; k <= 'Z'; k++) {
                cout << i << " " << j << " " << k << endl;
            }
            cout << endl;
        }
    }

}

int main()
{
    PrintAllWordsFromAToZ();
}
