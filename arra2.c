#include<stdio.h>
int main(){
    int N,mul[10];
    printf("enter the number jiski table chaiye\n");
    scanf("%d",&N);
    for (int i = 0; i <10; i++)
    {
       mul[i]=N*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%dX%d=%d\n",N,i+1,mul[i]);
    }
    
    return 0;
}