//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    //-----------------//
    //      input      //
    //-----------------//
    long long int n;
    cin>> n;

    long long int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }


    //------------------//
    //      process     //
    //------------------//
    //initialize two pointer technique
    bool flag= true;
    for(int i=0, j=n-1; i<=n/2 ;i++, j--){
        if(a[i]!=a[j]){
            flag= false;
            break;
        }
    }


    //-----------------//
    //      output     //
    //-----------------//
    (flag)? std::cout<< "YES\n" : std::cout<< "NO\n";
    
    return 0;
}