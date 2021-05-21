

// As we know, Ishaan has a love for chocolates. He has bought a huge chocolate bar that contains N chocolate squares. Each of the squares has a tastiness level which is denoted by an array A[].Ishaan can eat the first or the last square of the chocolate at once. Ishaan has a sister who loves chocolates too and she demands to eat it too. Now, Ishaan being greedy eats the more tasty square first. Determine the tastiness level of the square which his sister gets to eat.

// note: they are eating chocolates one after other, first piece by brother then next by sister and so on...

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    if(n % 2 == 0){
        for(int i=0;i<n;i++){
            if(a[0] >= a[n-i-1]){
                for(int j=0;j<n-i-1;j++){
                a[j] = a[j+1];
                }
            }
            else{ // last one is greater
                a[n-i-1] = 0;
            }
        }
    }
    else{
        for(int i=0;i<n-2;i++){
            if(a[0] >= a[n-i-1]){
                for(int j=0;j<n-i-1;j++){
                a[j] = a[j+1];
                }
            }
            else{ // last one is greater
                a[n-i-1] = 0;
            }
        }
        if(a[0] <= a[1]){
            a[0] = a[1];
        }
    }
    cout << a[0];
}