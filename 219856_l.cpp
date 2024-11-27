//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    string s;

    cin>> n >> q;
    cin.ignore();
    cin>> s;

    while(q--){
        string query;
        cin>> query;

        //manipulation
        if(query=="pop_back"){
            if(!s.empty()){
                s.pop_back();
                //cout<< s << endl;
            }
        }
        //just print
        else if(query=="front"){
            if(!s.empty()){
                cout<< s.front() << endl;
            }
        }
        //just print
        else if(query=="back"){
            if(!s.empty()){
                cout<< s.back() << endl;
            }
        }
        //manipulation
        else if(query=="sort"){
            int l, r;
            cin>> l >> r;
            if(l>r){
                swap(l, r);
            }
            l--;

            sort(s.begin()+l, s.begin()+r);
            //cout<< s << endl;
        }
        //manipulation
        else if(query=="reverse"){
            int l, r;
            cin>> l >> r;
            if(l>r){
                swap(l, r);
            }
            l--;
            
            reverse(s.begin()+l, s.begin()+r);
            //cout<< s << endl;
        }
        //just print
        else if(query=="print"){
            int pos;
            cin>> pos;

            cout<< s.at(pos-1) << endl;
        }
        //just print
        else if(query=="substr"){
            int l, r;
            cin>> l >> r;
            if(l>r){
                swap(l, r);
            }
            l--;
            
            cout<< s.substr(l,r-l) << endl;
        }
        //manipulation
        else if(query=="push_back"){
            char x;
            cin>> x;

            s.push_back(x);
            //cout<< s << endl;
        }
        
    }
    
    return 0;
}