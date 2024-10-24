#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    //find min max
    int min=a[0], max=a[0], minPos=0, maxPos=0;
    for(int i=0; i<n ;i++){
        if(a[i]<min){
            min= a[i];
            minPos= i;
        }

        if(a[i]>max){
            max= a[i];
            maxPos= i;
        }
    }

    //swap min max
    a[minPos]= max;
    a[maxPos]= min;


    //output
    for(int i=0; i<n ;i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}