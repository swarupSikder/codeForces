#include <stdio.h>
int main(){
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);


    //process
    long long int op1= a + b - c;
    long long int op2= a - b + c;
    long long int op3= a + b * c;
    long long int op4= a * b + c;
    long long int op5= a * b - c;
    long long int op6= a - b * c;

    if( d==op1 ||
        d==op2 ||
        d==op3 ||
        d==op4 ||
        d==op5 ||
        d==op6 ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}