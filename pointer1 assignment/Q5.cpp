//Q5 - Write a function that returns the first character, last character and 
// the number of occurrences of ‘t’ in a string input by user.
// input: twitter
// output: t r 3

#include<iostream>
using namespace std;

int fun(string s, char *first, char *last) {
    *first = s[0];
    *last = s[s.size() - 1];
    int ct = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 't') {
            ct++;
        }
    }
    return ct;
}
int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;
    char first, last;

    int count = fun(s, &first, &last);

    cout<<first<<" "<<last<<" "<<count<<endl;
    return 0;
}