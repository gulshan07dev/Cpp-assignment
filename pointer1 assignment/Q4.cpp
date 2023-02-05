//Q4 - Implement the swap function using pointers.
// input: 35 23
// output: 23 35

#include<iostream>
using namespace std;

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main() {
    int num1 = 35;
    int num2 = 23;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    swap(ptr1, ptr2);

    cout<<num1<<" "<<num2<<endl;
    return 0;
}