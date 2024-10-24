#include <stdio.h>

int gcd(int a, int b){
    //check min, max
    int min;
    int max;

    if(a>b){
        max= a;
        min= b;
    }
    else{
        max= b;
        min= a;
    }

    int r;
    while(r!=0){
        r= max%min;
        max= min;
        min= r;
    }

    int gcd= max;
    return gcd;
}



int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    printf("%d\n", gcd(a,b));

    return 0;
}