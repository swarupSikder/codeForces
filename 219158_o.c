#include <stdio.h>
int main(){
    int a,b;
    char signCH;
    //there should be no gap between %d,%c
    //otherwise, signCH will take 'space' as a character 
    scanf("%d%c%d", &a, &signCH, &b);

    if(signCH=='+'){
        printf("%d\n", a+b);
    }
    else if(signCH=='-'){
        printf("%d\n", a-b);
    }
    else if(signCH=='*'){
        printf("%d\n", a*b);
    }
    else if(signCH=='/'){
        printf("%d\n", a/b);
    }
    
    return 0;
}