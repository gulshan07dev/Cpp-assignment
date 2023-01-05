/*Write a program to calculate marks to grades.*/

#include<iostream>
using namespace std;
int main(){
int marks;

cout<<"Enter your marks: ";
cin>>marks;

if(marks>=90 and marks<=100)
{
    cout<<"Grade A";
}
else if(marks>=80 and marks<90)
{
    cout<<"Grade B";
}
else if(marks>=70 and marks<80)
{
    cout<<"Grade C";
}
else if(marks>=60 and marks<70)
{
    cout<<"Grade D";
}
else if(marks>=50 and marks<60)
{
    cout<<"Grade E";
}
else if(marks<50)
{
    cout<<"Fail";
}
else{
    cout<<"Enter valid mrks!";
}
    return 0;
}