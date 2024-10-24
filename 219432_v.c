#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int x=1;
    for(int i=1; i<=n*4 ;i++){
        if(x%4==0){
                printf("PUM\n");
        }
        else{
            printf("%d ", x);
        }
        x++;
    }

    return 0;
}