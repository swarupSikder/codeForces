//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void getDigits(int n){
    if(n==0) return;

    getDigits(n/10);

    cout<< n%10 <<" ";
}

void body(){
    int n;
    cin>> n;
    if(n==0) cout<< 0;
    else getDigits(n);
    cout<<endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    return 0;
}