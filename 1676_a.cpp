//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    string s;
    cin>> s;

    int sum1= (s[0]-'0')+(s[1]-'0')+(s[2]-'0');
    int sum2= (s[3]-'0')+(s[4]-'0')+(s[5]-'0');

    (sum1==sum2)? std::cout<< "YES" <<endl : std::cout<< "NO" <<endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    
    return 0;
}