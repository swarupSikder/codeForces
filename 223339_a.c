//author:   SwarupSikder
//Judge:    codeForces
//Problem:  A. Print Recursion

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printRec(int n){
    if(n==0){
        return;
    }

    printf("I love Recursion\n");
    printRec(n-1);
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
    printRec(n);
    return 0;
}