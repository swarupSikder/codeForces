#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d * %d = %lld\n", x, y, (long long int) x*y); //overflow controlled
    printf("%d - %d = %d\n", x, y, x-y);


    return 0;
}