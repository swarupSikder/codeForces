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



    //-----------------//
    //      output     //
    //-----------------//
    for(int i=0; i<n ;i++){
        if(a[i]<=10){
            printf("A[%d] = %lld\n", i, a[i]);
        }
    }


    return 0;
}