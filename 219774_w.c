#include <stdio.h>
int main(){
    //-------------//
    //    input    //
    //-------------//
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            scanf("%d", &a[i][j]);
        }
    }


    //--------------//
    //    output    //
    //--------------//
    for(int i=0; i<n ;i++){
        for(int j=m-1; j>=0 ;j--){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}