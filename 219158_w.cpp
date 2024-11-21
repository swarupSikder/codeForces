//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    char s,q;

    cin>> a;
    cin.ignore();
    cin>> s;
    cin>> b;
    cin.ignore();
    cin>> q;
    cin>> c;

    if(s=='+'){
        (a+b==c)? std::cout<<"Yes"<<endl : std::cout<< a+b <<endl;
    }
    else if(s=='-'){
        (a-b==c)? std::cout<<"Yes"<<endl : std::cout<< a-b <<endl;
    }
    else if(s=='*'){
        (a*b==c)? std::cout<<"Yes"<<endl : std::cout<< a*b <<endl;
    }

    
    return 0;
}