//author:   SwarupSikder
//Judge:    codeForces
//Problem:  I. Count Vowels

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int countVowels(char *a, int size, int i, int count){
    if(i==size){
        return count;
    }

    if( a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
        a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
        return countVowels(a, size, i+1, count+1);
    }
    else{
        return countVowels(a, size, i+1, count);
    }
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    char a[201];
    gets(a);

    //--------------//
    //   fun call   //
    //--------------//
    printf("%d\n", countVowels(a, strlen(a), 0, 0));
}

int main(){
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}