//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    //frequency array
    int f[26]={0};
    for(char c: s){
        c -= 'a';
        f[c]++;
    }

    //print the frequency array
    for(int i=0; i<26 ;i++){
        if(f[i]!=0){
            cout<< static_cast<char>(i+97)  << " : " << f[i] <<endl;
        }
    }
    
    return 0;
}