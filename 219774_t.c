#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n;
    scanf("%d", &n);

    int a[n][n];
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            scanf("%d", &a[i][j]);
        }
    }




    //------------------//
    //      process     //
    //------------------//

    //1st diagonal
    //* ' '
    //' * '
    //' ' *
    int sum1=0;
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            if(i==j){
                sum1 += a[i][j];
            }
        }
    }

    //2nd diagonal
    //' ' *
    //' * '
    //* ' '
    int sum2=0;
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            if(i+j==n-1){
                sum2 += a[i][j];
            }
        }
    }


    //-----------------//
    //      output     //
    //-----------------//
    printf("%d\n", abs(sum1-sum2));


    return 0;
}