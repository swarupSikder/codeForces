#include <stdio.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n;
    scanf("%d", &n);

    long long int a[n];
    for(int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }

    // for(int i=0; i<n ;i++){
    //     printf("%lld ", a[i]);
    // }



    //-------------------//
    //      process      //
    //-------------------//
    int countOp=0;
    for(int h=0; h<=countOp ;h++){
        int countRemainder=0;
        for(int i=0; i<n ;i++){
            if(a[i]%2==0){
                a[i]= a[i]/2;
                countRemainder++;
            }
            else{
                break;
            }
        }

        if(countRemainder==n){
            countOp++;
        }
    }



    //------------------//
    //      output      //
    //------------------//
    printf("%d\n", countOp);


    return 0;
}