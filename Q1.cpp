/* Q1 - Write a program to check whether two numbers (entered by user) 
are equal or not. 
Sample Input: 1, 2
Sample Output: 0     */

#include<iostream>
using namespace std;
int main() {
    cout<<"Enter two numbers: ";
    int n, m;
    cin>>n>>m;
    bool check = (n == m);
    cout<<check;
    return 0;
}