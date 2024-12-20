

/*
problem link ----> https://codeforces.com/contest/78/problem/B
*/


#include <iostream>
using namespace std;

typedef long long ll;

short get_number_of_sevens_in_input_number(const short& n){
    short i = 7, n_of_7 = 0, k = 1;
    while(i * k < n){
        i *= k;
        k++;
        n_of_7++;
    }
    return n_of_7;
}

int main(){
    char colors[8]{'R', 'O', 'Y', 'G', 'B', 'I', 'V', '\0'};
    short n;cin>>n;
    if(n==7)cout<<colors;
    else{
        char* ans = new char[n+1];
        int j = get_number_of_sevens_in_input_number(n) * 7;
        for(int i=0, k = 0; i<j; i++, k++){
            if(k == 7)k=0;
            ans[i] = colors[k];
        }
        for(int i=j; i<n; i++){
            ans[i] = ans[i-4];
        }
        ans[n]='\0';
        cout<<ans;
        delete[] ans;
    }
    return 0;
}
