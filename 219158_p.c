#include <stdio.h>
int main(){
    char a[1];
    scanf("%c", &a[0]);

    if(a[0]%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    
    return 0;
}