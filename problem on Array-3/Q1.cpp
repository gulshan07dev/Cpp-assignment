/* Q1 - Given an integer array and two integers L and R.
Find the sum of elements between the index L and index R.
Note: Both L and R inclusive.

Input: [1,2,3,4,5] L=1 R=3
Output: 9
Explanation: 2+3+4=9           */
 
#include<iostream>
using namespace std;
int main(){
     int arr[] = {1,2,3,4,5};
     int L = 1;
     int R = 3;
     int ans = 0;

     for(int i = L; i <= R; i++) {
          ans += arr[i];
     }
    cout<<ans<<endl;
     return 0;
}