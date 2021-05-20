
// Given an array A[] of N integers and an index Key. Your task is to print the element present at index key in the array.

// https://practice.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays

#include <iostream>
using namespace std;

int main(){
    int n=0;// Size of array
    int x=0;// position of element
    cin >> n;
    cin >> x;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << a[x];
}