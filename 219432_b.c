#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int countEven=0;
    for(int i=1; i<=n ;i++){
        if(i%2==0){
            countEven++;
            printf("%d\n", i);
        }
    }

    if(countEven==0){
        printf("-1\n");
    }

    return 0;
}