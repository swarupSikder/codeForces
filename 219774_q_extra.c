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
        //initialize 2D Array
        int b[100][100], b_index_1=0, b_index_2=0;


        int col=1, row=n;
        for(int k=0; k<n ;){
            for(int i=0; i<row ;){
                //asign to array b[][] 
                for(int j=0; j<col ;){
                    b[b_index_1][j]= a[i+j];
                    j++;
                    b_index_2=j;
                }
                b_index_1++;
                i++;
                // if(i!=0){
                //     printf("\n");
                // }

            }
            // printf("---------\n");
            row--;
            col++;
            k++;
            // if(k==n){
            //     printf("\n");
            // }
            
        }

        // Printing the 2D array (sub-array list)
        // for(int i=0; i<b_index_1 ;i++){
        //     for(int j=0; j<b_index_2 ;j++){
        //         if(b[i][j]>0){
        //             printf("%1d ", b[i][j]);
        //         }
        //     }
        //     printf("\n");
        // }
        // printf("---------------\n");

        //update the 2D array (sub-array list)
        int lineCount=0;
        for(int i=0; i<b_index_1 ;i++){
            int elementCount=0;
            for(int j=0; j<b_index_2 ;j++){
                if(b[i][j+1]!=0 && b[i][j]>b[i][j+1]){
                    elementCount++;
                }
                
            }

            if(elementCount>0){
                lineCount++;
            }
        }


        //Printing the 2D array (sub-array list)
        // for(int i=0; i<b_index_1 ;i++){
        //     for(int j=0; j<b_index_2 ;j++){
        //         if(b[i][j]>0){
        //             printf("%1d ", b[i][j]);
        //         }
        //     }
        //     printf("\n");
        // }

        printf("%d\n", b_index_1-lineCount);


    }

    return 0;
}