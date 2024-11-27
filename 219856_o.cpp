//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    char s[n];
    for(int i=0; i<n ;i++){
        cin>> s[i];
    }

    int f[26]= {0};
    for(char c: s){
        f[c-'a']++;
    }

    // Sort the string in-place
    int idx= 0; // Position to overwrite in the original string
    for(int i=0; i<26 ;i++) {
        while(f[i]--){ // Append characters in sorted order
            s[idx++]= char(i+'a');
        }
    }
    s[idx]= '\0';

    cout<< s <<endl;
    
    return 0;
}