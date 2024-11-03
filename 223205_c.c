//author:   SwarupSikder
//Judge:    codeForces
//Problem:  Wonderful Number

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void dec_to_bin(int n){
    int i=0;
    char *bin = (char *) malloc(1*sizeof(char));
    while(1){
        bin[i]= n%2;
        n= n/2;

        if(n==0){
            break;
        }

        i++;
        char *temp = bin;
        bin = (char *) realloc(bin, (i+1)*sizeof(char));
        if(bin==NULL){
            bin=temp;
        }
    }

    printf("%s", bin);

    // for(int j=0; j<strlen(bin) ;j++){
    //     printf("%c", );
    // }


    free(bin);
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
    dec_to_bin(n);

    return 0;
}