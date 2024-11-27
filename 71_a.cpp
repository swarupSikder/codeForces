//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    string s;
    cin>> s;

    if(s.size()>10){
        cout<< s.front() << s.size()-2 << s.back() <<endl;
    }
    else{
        cout<< s <<endl;
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    
    return 0;
}