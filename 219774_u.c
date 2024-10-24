#include <stdio.h>

int isSubsequence(long long int a[], int aLen, long long int b[], int bLen) {
    int i=0, j=0;

    while(i<aLen && j<bLen) {
        if(a[i]==b[j]){
            j++;
        }
        i++;
    }

    return j==bLen;
}

int main() {
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



    //-----------------//
    //      output     //
    //-----------------//
    if (isSubsequence(a, n, b, m)) {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}