

// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise).

// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n=0;
        cin >> n;
        int a[n];

        int x=0;
        cin >> x;

        for(int i=n-x;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n-x;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
