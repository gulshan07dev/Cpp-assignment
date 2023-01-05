//Q10- Write a C++ program to print a rectangle out of *

#include<iostream>
using namespace std;
int main() {

     int StarRows,StarColumns,i,j;
     cout<<"Please Enter the Star Rows: ";
     cin>>StarRows;
     cout<<"Please Enter the Star Columns: ";
     cin>>StarColumns;

     for(i=1;i<=StarRows;i++){
          for(j=1;j<=StarColumns;j++){
               cout<<"*";
          }
          cout<<endl;
     }

     return 0;
}