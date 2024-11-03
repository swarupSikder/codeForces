//author:   SwarupSikder
//Judge:    codeForces
//Problem:  print

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void printLine(int n){
    for(int i=1; i<n ;i++){
        printf("%d ", i);
    }
    printf("%d\n", n);
}

int main(){

    //---------------//
    //     input     //
    //---------------//
    int n;
    scanf("%d", &n);
    

    //---------- -----//
    //     output     //
    //----------------//
    printLine(n);

    return 0;
}