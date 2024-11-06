//author:   SwarupSikder
//Judge:    codeForces
//Problem:  C. Print from N to 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printNum(int i, int n){
    if(i>n){
        return;
    }

    //printf("%d ", i);       //1 to N
    printNum(i+1, n);
    if(i==n){
        printf("");
    }
    else{
        printf(" ");
    }
    printf("%d", i);        //N to 1
    
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
    printf("\n");
    return 0;
}