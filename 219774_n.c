#include <stdio.h>
#include <string.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int a,b;
    scanf("%d %d", &a, &b);
    getchar();
    int n= a+b+1;
    char arr[1000];
    for(int i=0; i<n ;i++){
        scanf("%s", arr);
    }


    //-------------------//
    //      process      //
    //-------------------//
    //check '-'
    if (arr[a] != '-') {
        printf("No\n");
        return 0;
    }

    //check string len
    if (a+b+1 != strlen(arr)) {
        printf("No\n");
        return 0;
    }
    
    //check digits
    int countDigits=0;
    for(int i=0; i<n ;i++){
        if('0'<=arr[i] && arr[i]<='9'){
            countDigits++;
        }
    }
    
    //------------------//
    //      output      //
    //------------------//
    if(countDigits==a+b){
         printf("Yes\n");
    }
    else{
        printf("No\n");
    }


    return 0;
}