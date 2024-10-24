#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);

    long long int a[n];
    for(int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }

    long long int sum=0;
    for(int i=0; i<n ;i++){
        sum += a[i];
    }

    // if(sum<0){
    //     sum= sum*(-1);
    // }

    printf("%lld\n", llabs(sum));


    return 0;
}