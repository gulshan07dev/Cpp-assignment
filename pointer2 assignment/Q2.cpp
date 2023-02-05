//Q2 - Write a program to find the sum of all the elements of an array.
// Use pointers to traverse the array. The first line of the input contains
// the size of the array.The second line of input contains the elements of the array.
// input: 4
// 1 3 4 2
// output: 10

#include<iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        sum += *(a+i);
    }
    cout<<sum<<endl;
    return 0;
}