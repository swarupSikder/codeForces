#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int t;
    scanf("%d\n", &t);

    while(t--){
        char s[100000];
        gets(s);

        bool subStringExist = false;       //by default
        for(int i=0; i<strlen(s)-2 ;i++){
            if((s[i]=='1' && s[i+1]=='0' && s[i+2]=='1') || (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')){
                subStringExist= true;
                break;
            }
        }

        if(subStringExist){
            printf("Good\n");
        }
        else{
            printf("Bad\n");
        }
    }
    

    return 0;
}