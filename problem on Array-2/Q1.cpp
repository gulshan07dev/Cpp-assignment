/*  Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in 
increasing order. Merge the two arrays into a single sorted array of size m+n.

Input: arr1=[1,2,3] arr2=[4,5,6]
Output: arr=[1,2,3,4,5,6]

Input:  arr1=[1,3,5] arr2=[2,4,6]
Output:  arr=[1,2,3,4,5,6]                  */
 
 #include<iostream>
 #include<vector>
 using namespace std;
 int main() {

     cout<<"Enter m and n: ";
     int m,n;
     cin>>m>>n;

     int arr1[m];
     int arr2[n];

     cout<<"Enter arr1: ";
     for(int i = 0; i < m; i++) {
          cin>>arr1[i];
     }
     cout<<"Enter arr2: ";
     for(int j = 0; j < n; j++) {
          cin>>arr2[j];
     }

     //code to marge two sorted array

     int result[m + n];
     int i = 0; //will help us to itrate on arr1
     int j = 0; //will help us to itrate on arr2
     int k = 0; //will help us to itrate on result array

     while(i < m and j  < n) {
          if(arr1[i] < arr2[j]) {
               result[k] = arr1[i];
               i++;
               k++;
          }
          else{
               result[k] = arr2[j]; 
               j++;
               k++;
          }
     }
     while(i < m) {
          result[k] = arr1[i];
          i++;
          k++;
     }
     while(j < n) {
          result[k] = arr2[j];
          j++;
          k++;
     }

     //display result
     for(int i = 0; i < (m+n); i++) {
          cout<<result[i]<<" ";
     }

     return 0;
 }