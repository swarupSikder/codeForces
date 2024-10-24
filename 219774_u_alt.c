#include <stdio.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n, m;
    scanf("%d %d", &n, &m);

    long long int a[n];
    for(int i=0; i<n ;i++){
        scanf("%lld", &a[i]);
    }

    long long int b[m];
    for(int i=0; i<m ;i++){
        scanf("%lld", &b[i]);
    }

    //------------------//
    //      process     //
    //------------------//
    //targeting the array a
    //so taking the n as first priority
    int countMatch=0;
    for(int i=0, j=0; i<n ;i++){
        if(b[j]==a[i]){
            countMatch++;
            j++;
        }
    }

    //-----------------//
    //      output     //
    //-----------------//
    if(countMatch==m){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}