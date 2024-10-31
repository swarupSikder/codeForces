#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    char s[1000], t[1000];
    gets(s);
    gets(t);

    printf("%d %d\n", strlen(s), strlen(t));
    printf("%s %s\n", s, t);

    return 0;
}