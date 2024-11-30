//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    int n;
    cin>> n;
    cin.ignore();

    char ch;
    cin>> ch;

    string s;
    s.assign(n, ch);

    for(char c: s){
        cout<< c <<" ";
    }
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