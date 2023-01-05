/*Q6- Write a program to print alphabet diamond pattern:
  A
 ABC
 ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
 ABCDE
 ABC
 A    */

#include<iostream>
using namespace std;
int main() {

  int size;
  cout<<"Enter size: ";
  cin>>size;

//print upper triangle

  for(int i = 1; i <= size; i++) {
    for(int j = 1; j <= (size-i); j++) {
      cout<<" ";
    }
    for(int k = 0; k < (2*i-1); k++) {
      cout<<(char)('A'+k);
    }
    cout<<endl;
  }
//print lower triangle

  for(int l = (size-1); l > 0; l--) {
    for(int m = 1; m <= (size-l); m++) {
      cout<<" ";
    }
    for(int n = 0; n< (2*l-1); n++) {
      cout<<(char)('A'+n);
    }
    cout<<endl;
  }
     return 0;
}