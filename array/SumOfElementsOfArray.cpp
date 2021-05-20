
// Given an array of N integers. Your task is to print the sum of all of the integers.

// https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays


#include <iostream>
using namespace std;

int main(){
    int n;
    int result=0;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        result += a[i];
    }
    cout << result;
}