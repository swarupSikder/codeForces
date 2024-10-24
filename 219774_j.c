#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }



    //------------------//
    //      process     //
    //------------------//
    //find minimum element
    int min= a[0];
    for(int i=0; i<n ;i++){
        if(a[i]<=min){
            min= a[i];
        }
    }

    //find the frequency of the minimum element
    int freqCount= 0;
    for(int i=0; i<n ;i++){
        if(a[i]==min){
            freqCount++;
        }
    }



    //-----------------//
    //      output     //
    //-----------------//
    if(freqCount%2!=0){
        printf("Lucky\n");
    }
    else{
        printf("Unlucky\n");
    }


    return 0;
}