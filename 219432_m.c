#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    int temp;
    if(x>y){
        temp= x;
        x= y;
        y= temp;
    }
    
    int count=0;
    for(int i=x; i<=y ;i++){
        int testNum=i;
        while(1){
            if(testNum==0){
                break;
            }

            if(testNum%10==4 || testNum%10==7){
                testNum= testNum/10;
            }
            else{
                count++;
                break;
            }

            if(testNum==0){
                printf("%d ", i);
            }

        }
    }

    if(count>0){
        printf("-1");
    }
    printf("\n");
    

    return 0;
}