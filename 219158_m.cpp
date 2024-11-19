//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cin>> x;

    if(48<=x && x<=57){
        cout<<"IS DIGIT"<<endl;
    }
    else if(65<=x && x<=90){
        cout<<"ALPHA\nIS CAPITAL"<<endl;
    }
    else if(97<=x && x<=122){
        cout<<"ALPHA\nIS SMALL"<<endl;
    }
    
    return 0;
}