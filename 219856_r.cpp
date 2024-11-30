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

    int score = 0;
    for(int i=0; i<n ;i++){
        char c = s[i];
        char next = s[i+1];

        // In case the string ends with X or Y or Z ignore their operations
        if(i==n-1 && (c=='X' || c=='Y' || c=='Z')){
            break;
        }

        if(c=='V'){
            score += 5;
            // cout<< score <<endl;
            // cout<< s <<endl;
        }
        else if(c=='W'){
            score += 2;
            // cout<< score <<endl;
            // cout<< s <<endl;
        }
        else if(c=='X'){
            // Skip the next character if it exists
            if(i+1<n){
                i++;
            }
            // cout<< score <<endl;
            // cout<< s <<endl;
        }
        else if(c=='Y'){
            //append the next char to the last
            //keep the next char, but avoid 
            s += next;
            i++;
            n++;
            
        
            // cout<< score <<endl;
            // cout<< s <<endl;
        }
        else if(c=='Z'){
            if(next=='V'){
                score /= 5;
                //s.erase(s.begin()+i+1);
                //n--;
                //instead, just ignore the next char
                i++;
                // cout<< score <<endl;
                // cout<< s <<endl;
            }
            else if(next=='W'){
                score /= 2;
                // s.erase(s.begin()+i+1);
                //n--;
                //instead, just ignore the next char
                i++;
                // cout<< score <<endl;
                // cout<< s <<endl;
            }
        }
    }

    cout<< score <<endl;
    
    return 0;
}