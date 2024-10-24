#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    long long int a[n];
    for(int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }

    long long int min= a[0];
    int index=0;
    for(int i=0; i<n ;i++){
        if(a[i]<min){
            min= a[i];
            index= i;
        }
    }

    printf("%lld %d\n", min, index+1);


    return 0;
}