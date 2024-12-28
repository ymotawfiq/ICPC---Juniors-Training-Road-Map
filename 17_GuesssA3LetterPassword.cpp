// 17_GuesssA3LetterPassword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string ReadPassword(string Message) {
    string s;
    bool success = false;
    do {
        cout << Message << endl;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i]<='Z') {
                if (i == s.length()-1) {
                    success = true;
                    break;
                }
            }
            else {
                break;
            }
        }
    } while (!success);
    return s;
}

void SearchForPassword(string Password) {
    string word = "";
    int counter = 0;
    bool found = false;
    for (char i = 'A'; i <= 'Z'; i++) {
        for (char j = 'A'; j <= 'Z'; j++) {
            for (char k = 'A'; k <= 'Z'; k++) {
                word += i;
                word += j;
                word += k;
                cout << "Trial[" << counter + 1 << "] = " << word << endl; 
                counter++;
                if (word == Password) {
                    word = "";
                    found = true;
                    break;
                }
                else {
                    word = "";
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (found) {
        cout << "Password found after " << counter << " times" << endl;
    }
    else {
        cout << "Password not found" << endl;
    }
}

void SearchForPassword2(string Password) {
    string word = "";
    int counter = 1;
    for (char i = 'A'; i <= 'Z'; i++) {
        for (char j = 'A'; j <= 'Z'; j++) {
            for (char k = 'A'; k <= 'Z'; k++) {
                word += i;
                word += j;
                word += k;
                cout << "Trial[" << counter << "] = " << word << endl;
                if (word == Password) {
                    cout << "Password Found After " << counter << " tries" << endl;
                    return;
                }
                else {
                    word = "";
                    counter++;
                }
            }
        }
    }
    cout << "Password not found" << endl;
}


int main()
{
    SearchForPassword2(ReadPassword("Enter 3 Capital Letters Password"));
}

