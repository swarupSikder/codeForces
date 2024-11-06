//author:   SwarupSikder
//Judge:    codeForces
//Problem:  Swap

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void swapTwo(int *x, int *y){
    int temp= *x;
    *x= *y;
    *y= temp;

    //printf("fun: %p %p\n", x, y);
}

int main(){

    //---------------//
    //     input     //
    //---------------//
    int x, y;
    scanf("%d %d", &x, &y);

    //printf("main: %p %p\n", &x, &y);
    

    //---------- -----//
    //     output     //
    //----------------//
    swapTwo(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}