//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

long long findFactorial(int n){
    if(n==1) return 1;

    long long fac = findFactorial(n-1)
}

int main(){
    int n;
    cin>> n;
    cout<< findFactorial(n) <<endl;
    return 0;
}