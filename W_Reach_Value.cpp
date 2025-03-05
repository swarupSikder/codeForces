//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL input;

bool getReachValue(LL n){
    if(input < n) return false;
    if(input == n) return true;
    bool b1 = getReachValue(n*10);
    bool b2 = getReachValue(n*20);
    return b1 || b2;
}

void body(){
    cin>> input;
    (getReachValue(1))? std::cout<< "YES" <<endl: std::cout<< "NO" <<endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    return 0;
}