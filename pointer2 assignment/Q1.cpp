//Q1 -Write a program to print the kth element of an array using pointers.
// The first line of the input contains the size of the array and the value of k.
// The second line of input contains the elements of the array.
// You can assume that 0 <= k < size of the array.
// input: 4 3
// 10 3 30 52
// output: 30

#include<iostream>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int *ptr = (a + k - 1);
    cout<<*ptr<<endl;

    return 0;
}