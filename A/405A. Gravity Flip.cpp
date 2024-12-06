

/*
problem link ----> https://codeforces.com/contest/405/problem/A
*/


#include <iostream>
#include <cmath>
using namespace std;

void read_number_of_columns_in_box(short& n){
    cin>>n;
}

void read_cubes(short* arr, short& size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}


void heapify(short* arr, const short& size, short index){
    short l = 2 * index + 1;
    short r = 2 * index + 2;
    short largest = index;
    if(l<size&&arr[l]>arr[largest])largest=l;
    if(r<size&&arr[r]>arr[largest])largest=r;
    if(largest != index){
        short temp = arr[index];
        arr[index] = arr[largest];
        arr[largest] = temp;
        heapify(arr, size, largest);
    }
}

void sort(short* arr, const short& size){

    for(int i=(size-1)/2; i>=0; i--){
        heapify(arr, size, i);
    }

    for(int i= size-1; i>0; i--){
        short temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }

}

void print_ans(short* arr, short& size){
    for(short i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    short number_of_columns = 0;
    read_number_of_columns_in_box(number_of_columns);
    short* arr = new short[number_of_columns];
    read_cubes(arr, number_of_columns);
    sort(arr, number_of_columns);
    print_ans(arr, number_of_columns);


    delete[] arr;
    return 0;
}