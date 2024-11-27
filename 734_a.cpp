//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    string s;
    cin>> s;

    int countA=0, countD=0;
    for(char c: s){
        if(c=='A'){
            countA++;
        }
        else if(c=='D'){
            countD++;
        }
    }

    if(countA>countD){
        cout<< "Anton" <<endl;
    }
    else if(countD>countA){
        cout<< "Danik" <<endl;
    }
    else if(countD==countA){
        cout<< "Friendship" <<endl;
    }
    
    return 0;
}