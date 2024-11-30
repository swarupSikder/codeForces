#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    //replace other characters with space
    for(int i=0; i<s.size() ;i++){
        if(!isalpha(s[i])){
            s[i] = ' ';
        }
    }

    stringstream ss(s);
    string word;
    int count=0;
    while(ss >> word){
        count++;
    }

    cout<< count <<endl;
    return 0;
}
