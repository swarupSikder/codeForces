#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(65<=ch && ch<=90){
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(97<=ch && ch<=122){
        printf("ALPHA\nIS SMALL\n");
    }
    else if(48<=ch && ch<=57){
        printf("IS DIGIT\n");
    }

    return 0;
}
