#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    char str[1000001];
    scanf("%s", str);
    int f[26] = {0};

    for(int i=0; str[i]!='\0' ;i++){
        (int) f[str[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(f[i]>0) {
            printf("%c : %d\n", (char) i+'a', f[i]);
        }
    }

    return 0;
}