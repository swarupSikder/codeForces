//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    int start_L=0;
    int start_R=0;
    bool flag_L=true;
    bool flag_R=false;

    for(int i=0; i<s.size() ;i++){
        if(s[i]=='L' && flag_L){
            start_L++;
            if(s[i+1]=='R'){
                flag_R= true;
            }
        }

        if(s[i]=='R' && flag_R){
            start_R++;
            if(s[i+1]=='L'){
                flag_L= false;
            }
        }

        
        if(!flag_L){
            string result;
            result.append(start_L, 'L');
            result.append(start_R, 'R');
            cout<< result <<endl;
            start_L=0;
            start_R=0;
            flag_L=true;
            flag_R=false;
        }
        
    }
    
    return 0;
}