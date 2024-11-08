//author:   SwarupSikder
//Judge:    codeForces
//Problem:  F. Equation

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
long long int fun(long long int k, long long int i){
    if(i==1){
        return k;
    }
    return k*fun(k,i-1);
}

void eqn(long long int x, long long int n){
    long long int sum= 0;
    for(long long int i=2; i<=n ;i+=2){
        sum= sum+fun(x,i);
    }

    printf("%lld\n", sum);
}


void body(){
    //---------------//
    //     input     //
    //---------------//
    long long int x,n;
    scanf("%lld %lld", &x, &n);

    //--------------//
    //   fun call   //
    //--------------//
    if(n%2==0){
        eqn(x,n);
    }
    else{
        eqn(x,n-1);
    }
    
}

int main(){
    long long int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}