//Q2 - You are given a n*n square matrix, you need to rotate the matrix 
// by 90 degrees in clockwise direction. You need to do it in-place i.e. 
// you are not allowed to make a new matrix and allocate the elements to it.
// Make the changes in the same matrix and print it.
// input: n = 3, arr[] = {{1,2,3}, {4,5,6}, {7,8,9}}
// output: {{7,4,1},{8,5,2},{9,6,3}}

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    //swaping diagonal
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n/2; j++) {
            swap(arr[i][j], arr[i][n-1]);
        }
    }
    //print result
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}
// 1 2 3       1 4 7     7 4 1
// 4 5 6 ->    2 5 8 ->  8 5 2
// 7 8 9       3 6 9     9 6 3