#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long long int compare(const void* a, const void* b){
    return (*(long long int*)a - *(long long int*)b);
}

int main(){
    //---------------//
    //     input     //
    //---------------//
    long long int n,q;
    scanf("%lld %lld", &n, &q);

    long long int a[n];
    for(long long int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }


    //----------------//
    //     process    //
    //----------------//
    //sorting by asc order
    qsort(a, n, sizeof(long long int), compare);

    // for(long long int i=0; i<n ;i++){
    //     printf("%lld ", a[i]);
    // }
    // printf("\n");

    //x -index
    while (q--){
        long long int x;
        scanf("%lld", &x);

        bool matchFlag= false;
        long long int low_index= 0;
        long long int high_index= n-1;


        while(low_index<=high_index){
            //update mid_index
            long long int mid_index= (low_index+high_index)/2;

            if(x==a[mid_index]){
                matchFlag= true;
                break;
            }
            else if(x<a[mid_index]){
                //low = 0
                //high= updating...
                high_index= mid_index-1;
            }
            else{
                //low = updating...
                //high= n
                low_index= mid_index+1;
            }

            

        }


        //--------------//
        //    output    //
        //--------------//
        if(matchFlag==true){
                printf("found\n");
        }
        else{
            printf("not found\n");
        }
    }
    
    return 0;
}