

// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise).

// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int x; // rotation no of times
        cin >> x;

        int t=0;
        for(int i=0;i<x;i++){
            t=arr[0];
            for(int j=0;j<n-1;j++){     
                arr[j] = arr[j+1];
            }
            arr[n-1] = t;
        }
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
    }
}