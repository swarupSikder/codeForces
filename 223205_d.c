//author:   SwarupSikder
//Judge:    codeForces
//Problem:  D. Prime Function

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
bool isPrime(int n){
    int optimized_n= sqrt(n);
    int flag=1;
    for(int i=2; i<=optimized_n ;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }

    return flag;
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n;
    scanf("%d", &n);
    

    //--------------//
    //   fun call   //
    //--------------//
    if(n==1){
        printf("NO\n");
    }
    else if(isPrime(n)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        body();
    }
    
    return 0;
}