#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    long long int n;
    scanf("%lld", &n);

    long long int a[n];
    for(long long int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }

    long long int x;
    scanf("%lld", &x);



    //------------------//
    //      process     //
    //------------------//
    //find position of x
    long long int pos=-1;
    for(long long int i=0; i<n ;i++){
        if(a[i]==x){
            pos= i;
            break;
        }
    }

    
    //-----------------//
    //      output     //
    //-----------------//
    printf("%lld\n", pos);


    return 0;
}