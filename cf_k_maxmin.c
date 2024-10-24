#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);


    //-----------//
    //    min    //
    //-----------//
    int min;
    if(a<b){
        if(a<c){
            min=a;
        }
        else{
            min=c;
        }
    }
    else{
        if(b<c){
            min=b;
        }
        else{
            min=c;
        }
    }



    //-----------//
    //    max    //
    //-----------//
    int max;
    if(a>b){
        if(a>c){
            max=a;
        }
        else{
            max=c;
        }
    }
    else{
        if(b>c){
            max=b;
        }
        else{
            max=c;
        }
    }

    //Output
    printf("%d %d\n", min, max);

    return 0;
}
