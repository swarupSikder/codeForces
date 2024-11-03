#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    char s[1000000];
    scanf("%s", s);

    //initialize frequency array {0,0,0, . . .}
    int f[1000]={0};

    for(int i=0; i<strlen(s) ;i++){
        f[s[i]]++;
    }

    for(int i=97; i<123 ;i++){
        if(f[i]!=0){
            printf("%c : %d\n", i, f[i]);
        }
    }

    return 0;
}