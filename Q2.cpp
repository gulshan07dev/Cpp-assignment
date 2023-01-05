/*     Q2 - Given radius of a circle. Write a 
function to print the area and circumference of the circle     */

#include<iostream>
using namespace std;
double circumference(int r){    //r=radius
   double cir=2*3.14*r;
   return cir;
}
double area(int r){   //r=radius
  double area=3.14*r*r;
  return area;
}
int main(){
int r;           //r=radius

cout<<"Enter radius: ";
cin>>r;
cout<<"circumference: "<<circumference(r)<<endl;
cout<<"area: "<<area(r)<<endl;
     return 0;
}