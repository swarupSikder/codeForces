//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    //initialize array
    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    //finding max
    int mx= INT_MIN;
    for(int i=0; i<n ;i++){
        mx = max(a[i], mx);
    }

    //output
    cout<< mx <<endl;
    
    return 0;
}