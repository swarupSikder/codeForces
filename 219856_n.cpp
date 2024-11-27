//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    cin.ignore();

    string s;
    cin>> s;

    //initialize substring with first element of s
    string substring;
    substring +=  s[0];
    int maxLen=1;

    for(int i=1; i<n ;i++){
        if(s[i] != substring[maxLen-1]){
            substring += s[i];
            maxLen++;
        }
        //cout<< substring <<endl;
    }

    cout << maxLen << endl;
    
    return 0;
}