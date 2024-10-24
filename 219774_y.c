#include <stdio.h>
int main(){
    //---------------//
    //     input     //
    //---------------//
    long long int n,q;
    scanf("%lld %lld", &n, &q);

    long long int a[n];
    long long int b[n];
    for(long long int i=0; i<n ;i++){
        scanf("%lld", &a[i]);

        if(i==0){
            b[i]= a[i];
        }
        else{
            b[i]= a[i] + b[i-1];
        }
    }

    // for(long long int i=0; i<n ;i++){
    //     printf("%lld ", a[i]);
    // }
    // printf("\n");

    // for(long long int i=0; i<n ;i++){
    //     printf("%lld ", b[i]);
    // }
    // printf("\n");

    //----------------//
    //     process    //
    //----------------//
    //l -start
    //r -end
    while (q--){
        long long int l,r;
        scanf("%lld %lld", &l, &r);
        
        l--;
        r--;
        long long int sum= a[l]+ b[r]- b[l];
        printf("%lld\n", sum);
    }
    
    return 0;
}