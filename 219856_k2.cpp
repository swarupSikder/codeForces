//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    //input
    string s, t, result;
    cin>> s;
    cin>> t;

    //find min length of the string
    int len_s= s.size();
    int len_t= t.size();
    int min_len= min(len_s, len_t);

    //append to result untill minLen is filled up
    for(int i=0; i<min_len ;i++){
        result += s[i];
        result += t[i];
    }

    //append the last elements from the bigger string
    if(len_s>len_t){
        s.erase(0, min_len);
        result += s;
    }
    else{
        t.erase(0, min_len);
        result += t;
    }
    
    //output
    cout<< result <<endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    
    return 0;
}