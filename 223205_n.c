//author:   SwarupSikder
//Judge:    codeForces
//Problem:  N. Shift Zeros

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void shiftZero(int a[], int n){
    int b[n];
    int j=0;
    for(int i=0; i<n ;i++){
        if(a[i]!=0){
            b[j]=a[i];
            j++;
        }
    }

    for(int i=j; i<n ;i++){
        b[i]=0;
    }

    for(int i=0; i<n ;i++){
        printf("%d ", b[i]);
    }
    printf("\n");
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
    shiftZero(a, n);

}

int main(){
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}