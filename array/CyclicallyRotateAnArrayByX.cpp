

// Given an array, rotate the array by 1 position in clock-wise direction.

// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays

#include <iostream>
using namespace std;

void rotate(int arr[], int n){
    int t = arr[n-1];

    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = t;
}

int main(){
    int n=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    rotate(a,n);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}