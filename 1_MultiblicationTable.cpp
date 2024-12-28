// 1_MultiblicationTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void PrintHeader() {
    cout << "\n\n\t\t\t\t Multiplication Table From 1 To 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << "\n--------------------------------------------------------------------------";
    cout << "-----------------\n";
}

string spacesSperator(int i) {
    if (i>9 && i<100) {
        return " |";
    }
    return "  |";
}

void PrintMultiplicationTable() {
    PrintHeader();
    for (int i = 1; i <= 10; i++) {
        cout << " " << i << spacesSperator(i) << "\t";
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << "\n";
    }
}


int main()
{
    PrintMultiplicationTable();
}

