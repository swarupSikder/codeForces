//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    ss >> word;
    reverse(word.begin(), word.end());
    cout<< word;

    while(ss >> word){
        reverse(word.begin(), word.end());
        cout<<" "<< word;
    }
    cout<<endl;

    return 0;
}