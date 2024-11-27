//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    string target = "hello";
    for(int i=0; i<s.size() ;i++){
        if(s[i]==target[0]){
            target.erase(0,1);
        }
    }

    (target.empty())? std::cout<< "YES" <<endl : std::cout<< "NO" <<endl;
    
    return 0;
}