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
        // 1 2 3 4 5
        // 1 2 3 4
        // 1 2 3
        // 1 2
        // 1 
        // 2 3 4 5
        // 2 3 4
        // 2 3
        // 2 
        // 3 4 5
        // 3 4
        // 3
        // 4 5
        // 4
        // 5
        int finalCount=n;
        int wrongCount=0;
        int rowDecre=0;

        for(int k=0; k<n ;k++){
            int colDecre=1;
            for(int i=0; i<n ;i++){
                for(int j=rowDecre; j<n-colDecre ;){
                    if(a[j]>a[j+1]){
                        //printf("* ");
                        wrongCount++;
                    }
                    // else{
                    //     printf("%d ", a[j]);
                    // }

                    
                    j++;
                    if(j==n-colDecre){  
                        finalCount++;
                    }
                    
                }
                //printf("\n");
                colDecre++;
            }
            rowDecre++;
        }
        //printf("wrong = %d\n", wrongCount);
        printf("%d\n", finalCount-wrongCount);

    }

    return 0;
}