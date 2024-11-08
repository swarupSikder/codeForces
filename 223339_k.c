//author:   SwarupSikder
//Judge:    codeForces
//Problem:  K. Max Number

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int findMaxInArray(int a[], int n, int max, int i){
    if(i==n){
        return max;
    }

    if(a[i]>max){
        return findMaxInArray(a, n, a[i], i+1);
    }
    else{
        return findMaxInArray(a, n, max, i+1);
    }
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    

    //--------------//
    //   fun call   //
    //--------------//
    printf("%d\n", findMaxInArray(a, n, a[0], 0));
}

int main(){
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}