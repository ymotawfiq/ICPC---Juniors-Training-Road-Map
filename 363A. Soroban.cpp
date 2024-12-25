

/*
problem link ----> https://codeforces.com/contest/363/problem/A
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string representNumber(char n){
    switch (n)
    {
    case '0':
        return "O-|-OOOO";
    case '1':
        return "O-|O-OOO";
    case '2':
        return "O-|OO-OO";
    case '3':
        return "O-|OOO-O";
    case '4':
        return "O-|OOOO-";
    case '5':
        return "-O|-OOOO";
    case '6':
        return "-O|O-OOO";
    case '7':
        return "-O|OO-OO";
    case '8':
        return "-O|OOO-O";
    case '9':
        return "-O|OOOO-";
    }
    return "";
}

int main(){

    string number;
    cin>>number;

    for(int i=number.length() - 1; i>=0; i--){
        cout<<representNumber(number[i])<<endl;
    }

    return 0;
}
