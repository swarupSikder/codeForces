#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n;
    scanf("%d", &n);

    long long int a[n];
    for(int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }



    //------------------//
    //      process     //
    //------------------//
    //replace positive number by 1
    //replace negative number by 2

    for(int i=0; i<n ;i++){
        if(a[i]>0){
            a[i]= 1;
        }
        else if(a[i]<0){
            a[i]= 2;
        }
    }

    
    //-----------------//
    //      output     //
    //-----------------//
    for(int i=0; i<n ;i++){
        printf("%lld ", a[i]);
    }
    printf("\n");


    return 0;
}