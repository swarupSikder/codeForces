#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n;
    scanf("%d", &n);
    getchar();

    char a[n];
    for(int i=0; i<n ;i++){
        scanf("%c", &a[i]);
    }

    



    //------------------//
    //      process     //
    //------------------//
    //sum up the digits
    int sum= 0;
    for(int i=0; i<n ;i++){
        sum= sum+ (a[i]-'0');
    }
    



    //-----------------//
    //      output     //
    //-----------------//
    printf("%d\n", sum);

    return 0;
}