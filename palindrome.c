#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    char s[1000], t[1000];
    gets(s);

    //copy to t[]
    strcpy(t, s);

    //reverse s[]
    strrev(s);

    if(strcmp(s, t)==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}