#include <stdio.h>
#include <stdbool.h>
int main(){
    //-----------------//
    //      input      //
    //-----------------//
    int n,m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);



    //------------------//
    //      process     //
    //------------------//
    bool matchFlag= false;

    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            if(a[i][j]==x){
                matchFlag= true;
                break;
            }
        }
    }


    //-----------------//
    //      output     //
    //-----------------//
    if(matchFlag==true){
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }


    return 0;
}