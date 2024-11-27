//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    if(s.size()<5){
        cout<< s <<endl;
        return 0;
    }

    if(s=="EGYPT"){
        cout<< " " <<endl;
        return 0;
    }

    string target = "EGYPT";
    for(int i=0; i<s.size()-4 ;i++){
        string substring;
        substring.assign(s ,i ,5);
        //cout<< i <<" : "<< substring <<endl;
        if(substring==target){
            s.replace(i,5, " ");
        }

        if(s.size()<5){
            break;
        }
    }

    cout<< s <<endl;
    
    return 0;
}