#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    char s[1000000];
    scanf("%[^\\]s", s);

    printf("%s\n", s);

    return 0;
}