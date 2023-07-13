/*  Q4 - Given a vector arr[] sorted in increasing order. Return an array of 
squares of each number sorted in increasing order. Where size of vector 1<size<101.

Input: [0,1,2,3]
Output: [0,1,4,9]

Input: [-5,-4,-3,-2,-1]
Output: [1,4,9,16,25]

Input: [-4,-3,-1,0,2,10]
Output: [0,2,4,9,16,100]           */
 
#include<iostream>
#include<vector>
using namespace std;

void squaredArrayInSorted(int n, int arr[]) {
     int result[n];
     int i = 0,j = n - 1,k = n - 1;

     while(i <= n && k >= 0) {
          if(abs(arr[i]) > abs(arr[j])) {
               result[k] = arr[i] * arr[i];
               i++;
               k--;
          }
          else{
               result[k] = arr[j] * arr[j];
               j--;
               k--;
          }
     }

     //display result
     for(int i = 0;i < n;i++) {
          cout<<result[i]<<" ";
          }

}
int main() {

     cout<<"Enter n: ";
     int n;
     cin>>n;
     cout<<"Enter arr[]: ";
     int arr[n];
     for(int i = 0;i < n;i++) {
          cin>>arr[i];
     }

     squaredArrayInSorted(n, arr);
     
     return 0;
}