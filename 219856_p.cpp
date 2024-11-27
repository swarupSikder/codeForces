//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(int i=0; i<s.size() ;){
        if(s[i]=='!' ||s[i]=='.' ||s[i]=='?' ||s[i]==','){
            s.erase(i,1);
            continue;
        }
        i++;
    }
    
    //cout<< s <<endl;

    stringstream ss(s);
    string word;
    int count=0;
    
    while(ss >> word){
        count++;
    }

    cout<< count <<endl;
    
    return 0;
}