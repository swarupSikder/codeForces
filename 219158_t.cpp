//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>> a >> b >> c;

    int x = min(a, min(b,c));
    int y;
    int z = max(a, max(b,c)); 

    if((a==x && b==z) || (a==z && b==x)){
        y= c;
    }
    else if((b==x && c==z) || (b==z && c==x)){
        y= a;
    }
    else if((a==x && c==z) || (a==z && c==x)){
        y= b;
    }

    cout<< x <<endl<< y <<endl<< z <<endl<<endl;
    cout<< a <<endl<< b <<endl<< c <<endl;
    
    return 0;
}