//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n;
    cin>> n;

    long long int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }

    //-------------------//
    //      process      //
    //-------------------//
    for(int i=0, j=n-1; i<n/2 ;i++, j--){
        swap(a[i], a[j]);
    }

    //------------------//
    //      output      //
    //------------------//
    for(int i=0; i<n ;i++){
        cout<< a[i];
        (i!=n-1)? std::cout<<" " : std::cout<<"\n";
    }
    
    return 0;
}