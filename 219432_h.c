#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int count= 0;
    for(int i=2; i<n ;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    
    
    
    return 0;
}