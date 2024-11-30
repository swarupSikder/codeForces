//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    string s;
    cin>> s;

    int f[26]= {0};
    for(char c: s){
        f[c-'a']++;
    }

    // Sort the string in-place
    int idx= 0;
    for(int i=0; i<26 ;i++) {
        while(f[i]--){
            s[idx++]= char(i+'a');
        }
    }

    cout<< s <<endl;
    
    return 0;
}