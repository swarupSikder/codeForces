#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    char x[1000], y[1000];
    gets(x);
    gets(y);

    if(strcmp(x,y)<strcmp(y,x)){
        printf("%s\n", x);
    }
    else{
        printf("%s\n", y);
    }

    return 0;
}