#include <stdio.h>
int main(){
    char ch, next;
    scanf("%c", &ch);

    if(ch=='z'){
        next= 'a';
    }
    else{
        next= ch+1;
    }

    printf("%c\n", next);

    return 0;
}