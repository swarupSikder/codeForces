//author:   SwarupSikder
//Judge:    codeForces
//Problem:  H. N Times

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void printCH(int n, char c){
    if(n==0){
        printf("\n");
        return;
    }
    else{
        printf(" ");
    }
    printf("%c", c);
    printCH(n-1,c);
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    char c;
    scanf("%d %c\n", &n, &c);

    //--------------//
    //   fun call   //
    //--------------//
    printCH(n,c);
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}