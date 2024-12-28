// 18_EncryptText.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadText(string Message) {
    string s;
    bool success = false;
    do {
        cout << Message << endl;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                continue;
            }
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                if (i == s.length() - 1) {
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

string EncryptText(string s, short key) {
    string encryptedText = "";
    for (int i = 0; i < s.length(); i++) {
        char encryptedChar;
        if (s[i] == ' ') {
            encryptedChar = '1';
        }
        else if ((s[i] >= 'A' && s[i] <= 'Z' && s[i] + key > 'Z')
            || (s[i] >= 'a' && s[i] <= 'z' && s[i] + key > 'z')) {
            encryptedChar = s[i] + key - 26;
        }
        else {
            encryptedChar = s[i] + key;
        }
        encryptedText += encryptedChar;
    }
    return encryptedText;
}

string DecryptText(string s, short key) {
    string decryptedText = "";
    for (int i = 0; i < s.length(); i++) {
        char decryptedChar;
        if (s[i] == '1') {
            decryptedChar = ' ';
        }
        else if ((s[i] >= 'A' && s[i] <= 'Z' && s[i] - key < 'A')
            || (s[i] >= 'a' && s[i] <= 'z' && s[i] - key < 'a')) {
            decryptedChar = s[i] - key + 26;
        }
        else {
            decryptedChar = s[i] - key;
        }
        decryptedText += decryptedChar;
    }
    return decryptedText;
}

void PrintEncryptedText(string s) {
    cout << "Encrypted Text is --> " << s << endl;
}

void PrintDecryptedText(string s) {
    cout << "Decrypted Text is --> " << s << endl;
}

int main()
{
    short key = 3;
    string encryptedText = EncryptText(ReadText("Enter Word"), key);
    string decryptedText = DecryptText(encryptedText, key);
    PrintEncryptedText(encryptedText);
    PrintDecryptedText(decryptedText);
}
