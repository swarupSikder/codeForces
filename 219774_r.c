#include <stdio.h>

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        // Find the minimum element in the remaining
        // unsorted array
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first
        // element
        int temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }
}

int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    int b[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &b[i]);
    }

    //------------------//
    //      process     //
    //------------------//
    selectionSort(a, n);
    selectionSort(b, n);

    int wrongFlag= 0;
    for(int i=0; i<n ;i++){
        if(a[i]!=b[i]){
            wrongFlag++;
            break;
        }
    }


    //-----------------//
    //      output     //
    //-----------------//
    if(wrongFlag==0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;
}