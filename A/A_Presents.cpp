

/*
problem link ----> https://codeforces.com/contest/136/problem/A
*/


#include <iostream>
#include <string>

using namespace std;



int main(){


    int nFriends;
    cin>>nFriends;

    int* arr1 = new int[nFriends]{0};
    int* arr2 = new int[nFriends]{0};

    for(int i=0; i<nFriends; i++){
        cin>>arr1[i];
        arr2[arr1[i] - 1] = i + 1;
    }


    for(int i=0; i<nFriends; i++){
        cout<<arr2[i]<<" ";
    }

    delete[] arr1;
    delete[] arr2;

    return 0;
}