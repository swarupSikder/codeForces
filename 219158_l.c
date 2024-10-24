#include <stdio.h>
#include <string.h>
int main(){
    char oneFirstName[1000], oneLastName[1000];
    char twoFirstName[1000], twoLastName[1000];

    scanf("%s %s", oneFirstName, oneLastName);
    scanf("%s %s", twoFirstName, twoLastName);

    if(strcmp(oneLastName, twoLastName) == 0){
        printf("ARE Brothers\n");
    } 
    else{
        printf("NOT\n");
    }

    return 0;
}
