#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    //Counting
    int evenCount=0, oddCount=0, posCount=0, negCount=0;

    for(int i=0; i<n ;i++){
        //check even-odd
        if(a[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }

        //check pos-neg
        if(a[i]>0){
            posCount++;
        }
        else if(a[i]<0){
            negCount++;
        }
    }


    //output
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", posCount);
    printf("Negative: %d\n", negCount);

    return 0;
}