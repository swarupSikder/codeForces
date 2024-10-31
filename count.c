#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    char s[1000000];
    gets(s);

    int sum=0;
    for(int i=0; i<strlen(s) ;i++){
        sum += (int) s[i]-'0';
    }

    printf("%d\n", sum);

    return 0;
}