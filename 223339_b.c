//author:   SwarupSikder
//Judge:    codeForces
//Problem:  B. Print from 1 to N

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printNum(int i, int n){
    if(i>n){
        return;
    }

    printf("%d\n", i);       //1 to N
    printNum(i+1, n);
    
    //printf("%d", i);        //N to 1
    
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
    printNum(1,n);
    return 0;
}