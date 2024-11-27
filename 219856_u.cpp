//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    //convert all elements to lowercase
    for(int i=0; i<s.size() ;i++){
        if('A'<=s[i] && s[i]<='Z'){
            s[i] += 32;
        }
    }

    //frequency array
    int f[26]= {0};
    for(char c: s){
        c -= 'a';
        f[c]++;
    }

    //minimum frequency of any ('e', 'g', 'y', 'p', 't')
    int minCount=INT_MAX;
    for(int i=0; i<26 ;i++){
        if(i==4 || i==6 || i==15 || i==19 || i==24){
            minCount = min(f[i], minCount);
        }
    }
    cout<< minCount <<endl;
    
    return 0;
}