//author:   SwarupSikder
//Judge:    codeForces
//Problem:  G. Max and MIN

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void minMax(int *a, int n){
    int min= a[0];
    int max= a[0];
    for(int i=1; i<n ;i++){
        if(a[i]<min){
            min= a[i];
        }

        if(a[i]>max){
            max= a[i];
        }
    }

    printf("%d %d\n", min, max);
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
    minMax(a, n);

}

int main(){
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}