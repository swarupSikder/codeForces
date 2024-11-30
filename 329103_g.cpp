//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n;
    cin>> n;

    int a[n];
    int odd=0, even=0;
    for(int i=0; i<n ;i++){
        cin>> a[i];
        (a[i]%2==0)? even++ : odd++ ;
    }

    if(n%2==1){
       cout<< -1 <<endl;
        return; 
    }

    if(even==odd){
        cout<< 0 <<endl;
        return;
    }

    if(even>odd){
        cout<< (even-odd)/2 <<endl;
    }
    else{
        cout<< (odd-even)/2 <<endl;
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