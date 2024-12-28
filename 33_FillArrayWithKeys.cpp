// 33_FillArrayWithKeys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enChars { CapitalLetters = 1, SmallLetters = 2, Digit = 3, SpecialCharacters = 4 };

void PrintChoosePanel() {
	cout << "\n----------------------------------\n";
	cout << "Choose Type Of Characters You Want To Generate Keys With" << endl;
	cout << "----------------------------------\n";
	cout << "(1) Capital Letters" << endl;
	cout << "(2) Small Letters" << endl;
	cout << "(3) Digits" << endl;
	cout << "(4) Special Characters" << endl;
	cout << "----------------------------------\n";
}

enChars ChooseKeyType(string Message) {
	int x;
	do {
		system("cls");
		PrintChoosePanel();
		cout << Message << endl;
		cin >> x;
	} while (x < 1 || x > 4);
	return (enChars)x;
}

int ReadNumber(string Message) {
	int x;
	do {
		cout << Message << endl;
		cin >> x;
	} while (x<0);
	return x;
}

char GetRandomChar(int From, int To) {
    return (char) (rand() % (To - From + 1) + From);
}

char GetChar(enChars e) {
	switch (e)
	{
	case CapitalLetters:
		return GetRandomChar(65, 90);
	case SmallLetters:
		return GetRandomChar(97, 122);
	case Digit:
		return GetRandomChar(48, 57);
	case SpecialCharacters:
		return GetRandomChar(33, 47);
	default:
		break;
	}
}


string GenerateSubKey(enChars e, int length) {
	string s = "";
	for (int i = 0; i < length; i++) {
		s += GetChar(e);
	}
	return s;
}

string GenerateFullKey(int nOfSubKeys, int lengthOfSubKey, enChars typeOfCharsForKey) {
	string key = "";
	for (int i = 0; i < nOfSubKeys; i++) {
		key += GenerateSubKey(typeOfCharsForKey, lengthOfSubKey);
		if (i < nOfSubKeys - 1) {
			key += '-';
		}
	}
	return key;
}

void GenerateKeysAndSaveInArray(string arr[], int nOfKeys, int nOfSubKeys, int lengthOfSubKey,
	enChars characterType) {
	for (int i = 0; i < nOfKeys; i++) {
		arr[i] = GenerateFullKey(nOfSubKeys, lengthOfSubKey, characterType);
	}
}

void PrintArray(string arr[], int length) {
	cout << "Keys" << endl;
	for (int i = 0; i < length; i++) {
		cout << "Key [" << i + 1 << "] = " << arr[i] << endl;
	}
}

int main()
{
	enChars e = ChooseKeyType("Enter Your Choise");
	int lengthOfSubKey = ReadNumber("Enter Length Of Sub Key");
	int numberOfSubKeys = ReadNumber("Enter Number Of Sub Keys");
	string arr[100];
	int NumberOfKeysYouWantToGenerate = ReadNumber("Enter Number Of Keys You want To Generate");

	GenerateKeysAndSaveInArray(arr, NumberOfKeysYouWantToGenerate, numberOfSubKeys,
		lengthOfSubKey, e);
	PrintArray(arr, NumberOfKeysYouWantToGenerate);


}

