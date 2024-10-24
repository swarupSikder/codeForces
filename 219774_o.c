#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    long long int f[51];
    f[0]= 0;
    f[1]= 1;
    for(int i=2; i<n ;i++){
        f[i]= f[i-2] + f[i-1];
    }

    // for(int i=0; i<n ;i++){
    //     printf("%d ", f[i]);
    // }

    //output
    printf("%lld ", f[n-1]);


    return 0;
}