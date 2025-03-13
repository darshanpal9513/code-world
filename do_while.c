#include<stdio.h>
int main(){
    int i=0;
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    do
    {
        printf("enter the n %d\n",i+1); i++;
    } while (i<n);
   
    return 0;
}