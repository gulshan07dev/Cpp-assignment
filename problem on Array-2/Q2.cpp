/*  Q2 - Given a vector arr[] sorted in increasing order of n size and an integer x,
 find if there exists a pair in the array whose sum is exactly x.

 Given: n>0 
 Input: [-1,0,1,2,3] x=2
 Output: Yes

 input: [1,2,3,4] x=9
 output: No               */  //1 2 3 4  x = 7

#include<iostream>
#include<vector>
using namespace std;

void pairSumYesOrNot(int n, int arr[], int x) {
     string result = "No";
     for(int i = 0; i < n; i++) {
          for(int j = i+1; j < n; j++) {
               if(arr[i] + arr[j] == x) {
                    result = "Yes";
               }
          }
     }
     cout<<result<<endl;
}
void pairSumYesOrNot2(int n, int arr[], int x) {
     int i = 0;
     int j = n-1;
     bool find = false;

     while(i < j) {
          if(arr[i] + arr[j] == x) {
               find = true;
               break;
          }
          else if(arr[i] + arr[j] < x) {
               i++;
          }
          else {
               j--;
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
    
    pairSumYesOrNot(n, arr, x);
    pairSumYesOrNot2(n, arr, x);
     return 0;
}