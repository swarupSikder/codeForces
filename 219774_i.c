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
        //min sum
        int sum=a[0]+a[1];
        for(int i=0; i<n ;i++){
            for(int j=i+1; j<n ;j++){
                if(a[i]+a[j]<=sum){
                    sum= a[i] + a[j] + j - i;
                }
            }
        }



        // //-----------------//
        // //      output     //
        // //-----------------//
        printf("%d\n", sum);
        
    }

    return 0;
}