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
    for(int i=n-1; i>=0 ;i--){
        printf("%lld ", a[i]);
    }
    printf("\n");


    return 0;
}