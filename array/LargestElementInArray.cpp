
// Given an array A[] of size n. The task is to find the largest element in it.

// https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays

#include <iostream>
using namespace std;

int main(){
    int n;
    int result = 0;
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    result = a[0];

    for(int i=1;i<n;i++){
        if(a[i] > result)
        result = a[i];
    }
    cout << result << endl;
}