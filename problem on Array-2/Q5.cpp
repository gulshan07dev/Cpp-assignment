/* Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x,
 find the number of unique pairs that exist in the array whose absolute sum is
  exactly x.

Input: [3,1,3,5,3] x=6
Output: 2
Explanation: The unique pairs are 3,3 and 1,5

Input: [2,2,2] x=4
Output:  1
Explanation: The only unique pair is 2,2         */
 
#include<iostream>
#include<vector>
using namespace std;

void uniqueSumIsXpair(int n, int arr[], int x) {
     int i = 0;
     int j = n-1;
     int unqiuesumpair = 0;

     while(i < j) {
          if(abs(arr[i] + arr[j]) == x) {
               unqiuesumpair++;
               i++;
               j--;
          }
          else if(abs(arr[i] + arr[j]) < x) {
               i++;
          }
          else {
               j--;
          }
     }
     cout<<unqiuesumpair<<endl;
}
int main() {

     cout<<"Enter n: ";
     int n;
     cin>>n;
     cout<<"Enter arr[]: ";
     int arr[n];
     for(int i = 0; i < n; i++) {
          cin>>arr[i];
     }
     cout<<"Enter x: ";
     int x;
     cin>>x;

     uniqueSumIsXpair(n, arr, x);
     
     return 0;
}