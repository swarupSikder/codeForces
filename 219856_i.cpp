//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    //copy to another string which will be reversed
    string s2;
    s2 = s;
    reverse(s2.begin(), s2.end());

    //check palindrome or not
    (s==s2)? std::cout<< "YES" : cout<< "NO";
    cout<<endl;
    
    return 0;
}