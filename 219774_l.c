#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        //-----------------//
        //      input      //
        //-----------------//
        int n;
        scanf("%d", &n);

        int a[n];
        for(int i=0; i<n ;i++){
            scanf("%d", &a[i]);
        }


        //------------------//
        //      process     //
        //------------------//
        // 1 
        // 6
        // 3
        // 7
        // 1 6
        // 6 3
        // 3 7
        // 1 6 3
        // 6 3 7
        // 1 6 3 7
        int col=1, row=n;
        for(int k=0; k<n ;){
            for(int i=0; i<row ;){
                int max= a[i];
                for(int j=0; j<col ;){
                    if(a[i+j]>max){
                        max= a[i+j];
                    }
                    
                    j++;
                }
                printf("%d ", max);
                i++;
                // if(i!=0){
                //     printf("\n");
                // }
            }
            row--;
            col++;
            k++;
            if(k==n){
                printf("\n");
            }
            
        }


    }

    return 0;
}