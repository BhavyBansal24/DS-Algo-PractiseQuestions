

// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

#include <iostream>
using namespace std;
int max(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[],int n){
    int min=max(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i] <= min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n = 0;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    cout << "max : " << max(a,n) << endl;
    cout << "min : " << min(a,n);
}