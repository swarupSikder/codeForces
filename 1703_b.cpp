//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n;
    cin>> n;

    string s;
    cin>> s;

    int f[26]= {0};
    for(char c: s){
        f[c-'A']++;
    }

    int sum=0;
    for(int i=0; i<26 ;i++){
        if(f[i]>0){
            //cout<< char(i+'A') <<" : "<< f[i] <<endl;
            sum += f[i]+1;
        }
    }

    //output
    cout<< sum <<endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    
    return 0;
}