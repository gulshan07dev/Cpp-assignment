//Q3 - Write a program to traverse the array in the reverse order using 
// pointers.The first line of the input contains the size of the array.
// The second line of input contains the elements of the array.
// input: 5
// 1 2 3 4 5
// output: 5 4 3 2 1

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = n-1; i >= 0; i--) {
        cout<<*(a + i)<<" ";
    }
    return 0;
}