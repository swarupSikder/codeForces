//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char s;

    cin>> a;
    cin.ignore();
    cin>> s;
    cin>> b;

    if(s=='>' && a>b){
        cout<< "Right" <<endl;
    }
    else if(s=='<' && a<b){
        cout<< "Right" <<endl;
    }
    else if(s=='=' && a==b){
        cout<< "Right" <<endl;
    }
    else{
        cout<< "Wrong" <<endl;
    }
    
    return 0;
}