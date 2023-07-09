/*Q4- Write a program to print positive number entered by the user ,
if user enters a negative number, it is skipped*/

#include<iostream>
using namespace std;
int main(){
int number;

cout<<"Enter an integer: ";
cin>>number;

if(number>0)
{
    cout<<"you entered a positive integer: " <<number<<endl;
}
else if(number==0)
{
    cout<<"neither positive nor negative: " <<number<<endl;
}
else
{
    cout<<"The number is negative and skipped ";
}

    return 0;
}