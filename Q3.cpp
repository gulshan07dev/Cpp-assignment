/* Q3 - Given a vector arr[] sorted in increasing order of n size and an integer x, 
find if there exists a pair in the array whose absolute difference is exactly x.

Given: n>0
Input: [5,10,15,20,26] x= 10
Output: Yes

Input: [5,6,7,8,9] x=4
Output: Yes

Input: [9,23,45,69,78] x=56
Output: No                 */

#include<iostream>
using namespace std;

void absoluteDifferenceIsYesOrNot(int n, int arr[], int x) {
     string result = "No";
     for(int i = 0; i < n; i++) {
          for(int j = i+1; j < n; j++){
               if(abs(arr[i] - arr[j]) == x) {
                    result = "Yes";
               }
          }
     }
     cout<<result<<endl;
     }

void absoluteDifferenceIsYesOrNot2(int n, int arr[], int x) {
     int i = 0;
     int j = 1;
     bool find = false;

     while(i < n and j < n) {
          if(abs(arr[i] - arr[j]) == x) {
               find = true;
               break;
          }
          else if(abs(arr[i] - arr[j]) < x) {
               j++;
          }
          else {
               i++;
          }
     }  
     if(find == true) {
          cout<<"YES";
     }   
     else {
          cout<<"NO";
     }
     }
int main() {

     cout<<"Enter n: ";
     int n;
     cin>>n;
     int arr[n];
     cout<<"Enter arr[]: ";
     for(int i = 0; i < n; i++) {
          cin>>arr[i];
     }
     cout<<"Enter x: ";
     int x;
     cin>>x;

     absoluteDifferenceIsYesOrNot(n, arr, x);
     absoluteDifferenceIsYesOrNot2(n, arr, x);

     return 0;
     }


