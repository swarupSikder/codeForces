#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    long long int n;
    scanf("%lld", &n);

    long long int a[n];
    for(int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }



    //------------------//
    //      process     //
    //------------------//
    //initialize reverse array
    long long int b[n];
    for(int i=n-1, j=0; i>=0 ;i--, j++){
        b[j]= a[i];
    }

    //check palindrome
    int countMatch= 0;
    for(int i=0; i<n ;i++){
        if(a[i]==b[i]){
            countMatch++;
        }
    }
    

    //-----------------//
    //      output     //
    //-----------------//
    if(countMatch==n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}