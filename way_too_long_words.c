#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    getchar();

    while(t--){
        char s[101];
        gets(s);

        int len = strlen(s);
        if(len>10){
            printf("%c%d%c\n", s[0], len-2, s[len-1]);
        }
        else{
            printf("%s\n", s);
        }

    }

    return 0;
}