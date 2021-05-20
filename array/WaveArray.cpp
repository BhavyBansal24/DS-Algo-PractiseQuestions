

// Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(n % 2 == 0){
        for(int i=0;i<n;i+=2){
            int sample = 0;
            sample = a[i+1];
            a[i+1] = a[i];
            a[i] = sample;
        }
    }
    else{
        for(int i=0;i<n-1;i+=2){
            int sample = 0;
            sample = a[i+1];
            a[i+1] = a[i];
            a[i] = sample;
        }
    }
    
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}