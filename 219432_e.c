#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    //initialize array
    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    //finding max
    int max= a[0];
    for(int i=0; i<n ;i++){
        if(a[i]>=max){
            max= a[i];
        }
    }

    //output
    printf("%d\n", max);
    
    

    return 0;
}