// You are given a matrix arr[][] of r rows and c columns. You need to swap the first column with the last column.

// https://practice.geeksforgeeks.org/problems/matrix-interchange/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays

/*

Input:
r = 3
c = 4
arr[][] = {{1, 2, 3, 4},
           {4, 3, 2, 1},
           {6, 7, 8, 9}}
Output:
4 2 3 1
1 3 2 4
9 7 8 6

*/

#include <iostream>
using namespace std;

class Solution{
    public:
    
    // Complete this function
    void interchange(vector<vector<int>>&arr, int r,int c)
    {
            int sample =0;
        for(int i=0;i<r;i++){
            sample = arr[i][c-1];
            arr[i][c-1] = arr[i][0];
            arr[i][0] = sample;
        }
      
        
        // Printing the modified matrix
        for(int i=0;i<r;i++) { 
    	   for(int j=0;j<c;j++) {
        	   cout << arr[i][j] << " ";
            }
        	cout << endl;
    	}
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    vector<vector<int>>arr(r,vector<int>(c));
	    for(int i=0;i<r;i++){
    	    for(int j=0;j<c;j++){
    	        int x;
    	        cin>>x;
    	        arr[i][j]=x;
    	    }
	    }
	    Solution ob;
	    ob.interchange(arr, r, c);
	}
	return 0;
}