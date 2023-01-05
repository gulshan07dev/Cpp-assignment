/*  Q1 - Given an integer array(arr) and its size(n), 
print the count of odd and even integers present in the array.
For ex: arr[]={1,2,3,4,5} n=5
Output: Odd Numbers = 3
        Even Numbers = 2     */


 #include<iostream>
 using namespace std;
 int main() {
     int arr[] = {1,2,3,4,5};
     int n = 5;
     int Odd_Numbers = 0;
     int Even_Numbers = 0;

     for(int i = 0; i < n; i++) {
          if(arr[i]%2 == 0) {
               Even_Numbers++;
          }
          else{
               Odd_Numbers++;
          }
     }
     cout<<"Odd Numbers = "<<Odd_Numbers<<endl;
     cout<<"Even Numbers = "<<Even_Numbers<<endl;
     return 0;
 }