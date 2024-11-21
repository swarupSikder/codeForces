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

    int a[n];
    for(int i=0; i<n ;i++){
        cin>> a[i];
    }


    //------------------//
    //      process     //
    //------------------//
    //find min
    sort(a, a+n);


    //-----------------//
    //      output     //
    //-----------------//
    for(int i=0; i<n ;i++){
        cout<< a[i];
        (i!=n-1)? std::cout<<" " : std::cout<<endl;
    }
    
    return 0;
}