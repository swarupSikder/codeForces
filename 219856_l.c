//auther:       SwarupSikder
//judge:        codeForces
//contest:      string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void pop_back(char a[]){
    a[strlen(a)-1]= '\0';
    //printf("%s\n", a);
}

void front(char a[]){
    printf("%c\n", a[0]);
}

void back(char a[], int pos){
    printf("%c\n", a[pos]);
}

void sort(char a[], int len, int start, int end){
    for(int i=start; i<end ;i++) {

        int min_idx= i;
        for(int j= i+1; j<=end ;j++){
            if(a[j]<a[min_idx]){
                min_idx = j;
            }
        }

        int temp= a[min_idx];
        a[min_idx]= a[i];
        a[i]= temp;
    }
}

void reverse(char a[], int len, int start, int end){
    char b[len];
    strcpy(b,a);
    for(int i=start, j=end; i<=end ;i++, j--){
        a[i]= b[j];
    }
}

void printPos(char a[], int pos){
    printf("%c\n", a[pos]);
}

void substr(char a[], int len, int start, int end){
    for(int i=start; i<end ;i++){
        printf("%c", a[i]);
    }
    printf("\n");
}

void push_back(char a[], int len, char ch){
    a[len]= ch;

    a[len+1]= '\0';
    //printf("%s\n", a);
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n,q;
    scanf("%d %d\n", &n, &q);

    char a[1000];
    scanf("%s\n", a);
    a[strlen(a)]= '\0';

    //printf("%s\n", a);

    //-----------------//
    //     process     //
    //-----------------//
    while(q--){
        char query[50];
        scanf("%s", query);
        query[strlen(query)]= '\0';

        if(strcmp(query, "pop_back")==0){
            pop_back(a);
            scanf("\n");
        }
        else if(strcmp(query, "front")==0){
            front(a);
            scanf("\n");
        }
        else if(strcmp(query, "back")==0){
            back(a, strlen(a)-1);
            scanf("\n");
        }
        else if(strcmp(query, "sort")==0){
            int l, r;
            scanf(" %d %d\n", &l, &r);
            sort(a, strlen(a), l-1, r-1);
            //printf("%s\n", a);
        }
        else if(strcmp(query, "reverse")==0){
            int l, r;
            scanf(" %d %d\n", &l, &r);
            reverse(a, strlen(a), l-1, r-1);
            //printf("%s\n", a);
        }
        else if(strcmp(query, "print")==0){
            int pos;
            scanf("%d", &pos);
            printPos(a, pos-1);
            scanf("\n");
        }
        else if(strcmp(query, "substr")==0){
            int l, r;
            scanf(" %d %d\n", &l, &r);
            substr(a, strlen(a), l-1, r);
        }
        else if(strncmp(query, "push_back", 9)==0){
            char x;
            scanf(" %c", &x);
            push_back(a, strlen(a), x);
            scanf("\n");
        }
        
    }

    //----------------//
    //     output     //
    //----------------//
    

}


int main(){
    int t=1;
    //scanf("%d\n", &t);
    while(t--){
        body();
    }

    return 0;
}