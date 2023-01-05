/* Q7- Write a program to print + pattern given below :
     *
     *
   *****
     *
     *     */

#include<iostream>
using namespace std;
int main() {

 int size;
 cout<<"Enter size (odd num.): ";
 cin>>size;

 for(int i = 1; i <= size; i++) {
     for(int j = 1; j <= size; j++) {
          if(j == (size-size/2) || i == (size-size/2)) {
               cout<<"*";
          }
          else{
               cout<<" ";
          }
     }
     cout<<endl;
 }    
     return 0;
}