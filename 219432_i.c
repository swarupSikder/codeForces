#include <stdio.h>
#define max 8

int main(){
    int n;
    scanf("%d", &n);

    //initialize reverse array and dynamic len
    int a[max];
    int len= 1;
    
    for(int i=0; i<len ;i++){
        a[i]= n%10;             //123 >>>>>>> 12-3 >>>> 3
        n   = n/10;             //123 >>>>>>> 12
        if(n==0){
            break;
        }
        else{
            len++;
        }
    }

    // for(int i=0; i<len ;i++){
    //     printf("%d", a[i]);
    // }
    // printf("\n");




    //--------------------------//
    //        Check First       //
    //--------------------------//
    //RE reverse the array
    int b[max];
    for(int i=0, j=len-1; i<len ;i++, j--){
        b[j] = a[i];
    }

    // for(int i=0; i<len ;i++){
    //     printf("%d", b[i]);
    // }
    // printf("\n");

    int matchedCount= 0;
    for(int i=0; i<len ;i++){
        if(a[i]==b[i]){
            matchedCount++;
        }
        else{
            break;
        }
    }

    int palindromeFlag;
    if(matchedCount==len){
        palindromeFlag=1;
    }
    else{
        palindromeFlag=0;
    }














    //-------------------------//
    //       Delete Zeros      //
    //-------------------------//
    //UPDATE array for deleting leading zeros
    if(a[0]==0){
        int leadingZeroCount=0;
        for(int i=0; i<len ;i++){
            if(a[i]==0){
                leadingZeroCount++;
            }
            else{
                break;
            }
        }

        //leading zero deleting...
        for(int i=0; i<len ;i++){
            a[i] = a[i+leadingZeroCount];
        }

        //new len
        len= len-leadingZeroCount;
    }



    

    //OUTPUT
    for(int i=0; i<len ;i++){
        printf("%d", a[i]);
    }

    printf("\n");


    if(palindromeFlag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    
    return 0;
}