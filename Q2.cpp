/*  Q2 - Given a natural number, find the number of 0’s in the binary 
representation of that number    */

#include<iostream>
using namespace std;
int main() {

     int n;
     cout<<"Enter the number: ";
     cin>>n;
     int count = 0;
     
     while(n > 0){
          int parity = n%2;
          if(parity == 0){
               count++;
          }
          n /= 2;
}
         
     cout<<"The Number of Zeros is: "<<count<<endl;
     
     return 0;
}