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


        //line -main iteration (line by line)
        //i -element by element
        int i=0, line=0;
        while(1){
            // //
            // printf("Initial\n");
            // printf("i= %d\n", i);
            // printf("line= %d\n\n", line);
            // //
    
            if(line==n-1){
                break;                                           
            }
            
            //first if
            if(a[i]>a[i+1]){
                line++;
                i=line;
                // //
                // printf("(1)if\n");
                // printf("i= %d\n", i);
                // printf("line= %d\n\n", line);
                // //
                continue;
            }
            
            //main
            i++;
            finalCount++;
            // //
            // printf("finalCount= %d\n", finalCount);
            // //


            // //
            // printf("(main)\n");
            // printf("i= %d\n", i);
            // printf("line= %d\n\n", line);
            // //

            //second if
            if(i==n-1){
                line++;
                i=line;
                // //
                // printf("(2)if\n");
                // printf("i= %d\n", i);
                // printf("line= %d\n\n", line);
                // //
            }
        }
        
        printf("%d\n", finalCount);

    }

    return 0;
}