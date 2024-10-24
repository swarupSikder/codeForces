#include<stdio.h>
int main(){
    long long int n, sum=0;
    scanf("%lld", &n);

    //using series sum formula
    sum = n*(n+1)/2;

    printf("%lld\n", sum);

    return 0;
}