#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    char s[100000];
    gets(s);

    for(int i=0; i<strlen(s) ;i++){
        if('a'<=s[i] && s[i]<='z'){
            s[i]= s[i]-' ';
        }
        else if('A'<=s[i] && s[i]<='Z'){
            s[i]= s[i]+' ';
        }
        else if(s[i]==','){
            s[i]= ' ';
        } 
    }

    printf("%s\n", s);

    return 0;
}