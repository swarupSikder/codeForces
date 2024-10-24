#include <stdio.h>
int main(){
    //-------------//
    //    input    //
    //-------------//
    int n, m;
    scanf("%d %d", &n, &m);

    char a[n][m];
    for(int i=0; i<n ;i++){
        scanf("\n");
        for(int j=0; j<m ;j++){
            scanf("%c", &a[i][j]);
        }
    }

    int x, y;
    scanf("%d %d", &x, &y);




    //---------------//
    //    process    //
    //---------------//
    int row= x-2;
    if(row<0){
        row=0;
    }
    int col= y-2;
    if(col<0){
        col=0;
    }

    int count= 0;
    for(int i=row; i<=x ;i++){
        for(int j=col; j<=y ;j++){
            if(a[i][j]!='x'){
                count++;
            }
        }
    }

    if(a[x-1][y-1]=='.'){
        count--;     
    }
    //printf("c= %d\n", count);

    //--------------//
    //    output    //
    //--------------//
    if(count==0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;
}