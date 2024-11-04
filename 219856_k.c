//auther:       SwarupSikder
//judge:        codeForces
//contest:      string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void body(){
    //---------------//
    //     input     //
    //---------------//
    char s[100], t[100];
    scanf("%s %s", s, t);

    //-----------------//
    //     process     //
    //-----------------//
    int len_s= strlen(s);
    int len_t= strlen(t);
    int len_dif= abs(len_s-len_t);
    int max_len, min_len;
    if(len_s>len_t){
        max_len= len_s;
        min_len= len_t;
    }
    else{
        max_len= len_t;
        min_len= len_s;
    }

    char newArray[200];
    for(int i=0, j=0; i<min_len ;i++){
        newArray[j]= s[i];
        newArray[j+1]= t[i];
        j+=2;
    }

    for(int i=min_len; i<max_len ;i++){
        if(len_s>len_t){
            newArray[min_len+i]= s[i];
        }
        else{
            newArray[min_len+i]= t[i];
        }
    }
    newArray[max_len+min_len]='\0';

    //----------------//
    //     output     //
    //----------------//
    printf("%s\n", newArray);
    

}


int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}