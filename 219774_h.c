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
    //find min every time
    for(int i=0; i<n ;i++){
        int temp;
        for(int j=0; j<n ;j++){
            if(a[i]<=a[j]){
                temp= a[i];
                a[i]= a[j];
                a[j]= temp;

            }
        }
    }

    //-----------------//
    //      output     //
    //-----------------//
    for(int i=0; i<n ;i++){
        printf("%d ", a[i]);
    }

    return 0;
}