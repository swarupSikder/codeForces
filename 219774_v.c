#include <stdio.h>
int main(){
    //n -array len
    //m -print each element exists how many times, upto m 
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], count[m+1];

    //Initialize frequency array (count[]) with zeros
    //to avoid garbage values 
    for (int i=0; i<=m; i++) {
        count[i]= 0;
    }

    //input a[] and update count at the same time
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    //--------------------//
    //    runtimeError    //
    //--------------------//
    // for(int i=0; i<m ;i++){
    //     int countElement=0;
    //     for(int j=0; j<n ;j++){
    //         if(a[i]==a[j]){
    //             countElement++;
    //         }
    //     }
    //     printf("%d\n", countElement);
    // }




    //--------------//
    //    output    //
    //--------------//
    for(int i=1; i<=m ;i++){
        printf("%d\n", count[i]);
    }

    return 0;
}