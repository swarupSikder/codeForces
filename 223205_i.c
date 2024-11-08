//author:   SwarupSikder
//Judge:    codeForces
//Problem:  I. Swapping With Matrix

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
void printArray(int **a, int n, int x, int y) {
    //row modification
    int temp;
    for(int i=0; i<n ;i++){
        temp= a[x][i];
        a[x][i]= a[y][i];
        a[y][i]= temp;
    }

    //col modification
    for(int i=0; i<n ;i++){
        temp= a[i][x];
        a[i][x]= a[i][y];
        a[i][y]= temp;
    }


    for (int i=0; i<n ;i++) {
        for (int j=0; j<n ;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n,x,y;
    scanf("%d %d %d", &n, &x, &y);

    int **a= (int **)malloc(n * sizeof(int *));
    for (int i=0; i<n ;i++) {
        a[i]= (int *)malloc(n * sizeof(int));
    }

    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            scanf("%d", &a[i][j]);
        }
    }
    

    //--------------//
    //   fun call   //
    //--------------//
    printArray(a, n, x-1, y-1);

    // Free memory
    for (int i=0; i<n ;i++) {
        free(a[i]);
    }
    free(a);
}

int main(){
    int t=1;
    //scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}