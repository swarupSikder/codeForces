#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    //initialize frequency array {0,0,0, . . .}
    int f[27];
    for(int i=0; i<27 ;i++){
        f[i]=0;
    }

    char s[1000000];
    gets(s);

    for(int i=0; i<strlen(s) ;i++){
        f[s[i]-'a']++;
    }

    for(int i=0; i<27 ;i++){
        if(f[i]!=0){
            printf("%c : %d\n", i+'a', f[i]);
        }
    }

    return 0;
}