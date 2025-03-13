#include<stdio.h>
int main(){
    int F=1, i=0;
    int n;
    printf("enter the number \n");
    scanf("%d",&n);

    for ( i = 1; i<= n; i++)
    {
       F=F*i;
        
    }
    printf("Factorial is %d is %d ",n, F);
    return 0;
    

}