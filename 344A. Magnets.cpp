

/*
problem link ----> https://codeforces.com/contest/344/problem/A
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

void read_number_of_magnets(int& n){
    cin>>n;
}

void read_magnet(char arr[2]){
    cin>>arr[0]>>arr[1];
}

void read_all_magnets_and_count_answer(char** arr, const int& size, int& ans){
    if(size==1){
        ans=1;
        return;
    }
    bool flag = false;
    for(int i=0; i<size; i++){
        read_magnet(arr[i]);
        if(i!=0){
            if(arr[i-1][1] == arr[i][0]){
                ans++;
                if(i != size - 1)flag=false;
                else flag = true;
            }
            else{
                flag = true;
            }
        }
    }
    if(flag){
        ans++;
    }
}

/*
solve using vector
*/

void read_string(string& s){
    cin>>s;
}

int read_all_magnets_and_count_answer(const int& size){
    string s;
    vector<string> v;
    for(int i=0; i<size; i++){
        read_string(s);
        if(v.empty())v.push_back(s);
        else{
            if(s!=v.back())v.push_back(s);
        }
    }
    return v.size();
}

int main(){

    int number_of_magnets;
    read_number_of_magnets(number_of_magnets);
    char** arr = new char*[number_of_magnets];
    for(int i=0; i<number_of_magnets; i++){
        arr[i] = new char[2];
    }

    int ans = 0;
    read_all_magnets_and_count_answer(arr, number_of_magnets, ans);

    cout<<ans;


    for(int i=0; i<number_of_magnets; i++){
        delete[] arr[i];
    }
    delete[]arr;

    /*
    vector solution (waste of memory)
    */
    //cout<<read_all_magnets_and_count_answer(number_of_magnets);

    return 0;
}