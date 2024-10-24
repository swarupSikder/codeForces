#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while (t--){
        int n;
        scanf("%d", &n);

        if(n==0){
            printf("1\n");
        }
        else{
            long long int fac=1;
            for(int i=1; i<=n ;i++){
                fac= (long long int) fac*i;
            }
            printf("%lld\n", fac);
        }
    }
    
    
    return 0;
}