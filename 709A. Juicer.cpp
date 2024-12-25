

/*
problem link ----> https://codeforces.com/contest/709/problem/A
*/


#include <iostream>
#include <string>
using namespace std;

int main(){


    int number_of_oranges, orange_size, waste_section_size;

    cin>>number_of_oranges>>orange_size>>waste_section_size;

    int* oranges = new int[number_of_oranges];

    int sum = 0;
    int ans = 0;

    for(int i=0; i<number_of_oranges; i++){
        cin>>oranges[i];
        if(oranges[i] <= orange_size){
            sum += oranges[i];
            if(sum > waste_section_size){
                ans++;
                sum = 0;
            }
        }
    }

    cout<<ans;


    delete[] oranges;

    return 0;
}