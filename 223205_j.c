//author:   SwarupSikder
//Judge:    codeForces
//Problem:  J. Average

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void avgFun(int n){
    double sum=0, a;
    for(int i=0; i<n ;i++){
        scanf("%lf", &a);
        sum += a;
    }
    printf("%.7lf\n", sum/n);
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    scanf("%d", &n);

    //--------------//
    //   fun call   //
    //--------------//
    avgFun(n);
}

int main(){
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}