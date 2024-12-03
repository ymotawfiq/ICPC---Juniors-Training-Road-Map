

/*
problem link ----> https://codeforces.com/contest/228/problem/A
*/


#include <iostream>
#include <string>
#include <cmath>
#include <unordered_set>

using namespace std;

int main(){

    unordered_set<int> set;
    int n1, n2, n3, n4;
    cin>>n1>>n2>>n3>>n4;

    set.insert(n1); 
    set.insert(n2); 
    set.insert(n3); 
    set.insert(n4);

    cout << 4 - set.size(); 


    return 0;
}