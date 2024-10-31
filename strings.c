#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    char a[11], b[11];
    gets(a);
    gets(b);

    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a, b);

    //swap task
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);

    return 0;
}