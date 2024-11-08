//author:   SwarupSikder
//Judge:    codeForces
//Problem:  P. Log2

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
long long int logFun(long long int n, int count){
    if(n==1){
        return count;
    }

    return logFun(n/2, count+1);
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    long long int n;
    scanf("%lld", &n);

    //--------------//
    //   fun call   //
    //--------------//
    printf("%d\n", logFun(n, 0));
}

int main(){
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}