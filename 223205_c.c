//author:   SwarupSikder
//Judge:    codeForces
//Problem:  Wonderful Number

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
bool isPalindrome(int bin[], int i){
    //check bin array palindrome or not
    int countFlag=0;
    for(int j=0, k= i-1; j<=k ;j++, k--){
        //printf("%d %d\n", bin[j], bin[k]);
        if(bin[j]!=bin[k]){
            countFlag=1;
            break;
        }
    }

    if(countFlag==0){
        return true;
    }
    else{
        return false;
    }
}

void dec_to_bin(int n){
    int copy_n= n;
    int i=0;
    int *bin = (int *) malloc(1*sizeof(int));
    while(1){
        bin[i]= n%2;
        n= n/2;
        i++;

        int *temp = bin;
        bin = (int *) realloc(bin, (i+1)*sizeof(int));
        if(bin==NULL){
            bin=temp;
        }

        if(n==0){
            break;
        }
    }

    // for(int j=0; j<i ;j++){
    //     printf("%d", bin[j]);
    // }
    // printf("\n");

    //---------------------------------//
    //     Call the Palindrome fun     //
    //---------------------------------//
    if(copy_n%2){
        if(isPalindrome(bin, i)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }


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