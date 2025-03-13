#include<stdio.h>
#include<string.h>
int main(){
    char*st="darsh";
    char st2[55]="panda";
     strcpy(st2,st);
    printf("now the st1 is %s", st2);
    return 0;
}