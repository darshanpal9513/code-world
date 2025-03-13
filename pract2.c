#include<stdio.h>
int main(){
    int i;
    int P, n;
    printf("enter the number \n");
    scanf("%d" ,&n);
    
    do
    {
        P=n*(n+1)/2;
    printf("the sum of first n is %d \n", P); n--;
        
    } while (n>0);
    return 0;
    }