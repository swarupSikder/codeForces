#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    //ceil part
    int ceil = (a/b)+1;
    if(a==b){
        ceil--;
    }


    //round part
    int realPart = a/b;
    double totalPart = (double) a/b;
    double fracPartTenTimes = (totalPart - realPart)*10;
    int round = a/b;

    if(fracPartTenTimes>=5){
        round++;
    }

    printf("floor %d / %d = %d\n", a, b, a/b);
    printf("ceil %d / %d = %d\n", a, b, ceil);
    printf("round %d / %d = %d\n", a, b, round);

    return 0;
}