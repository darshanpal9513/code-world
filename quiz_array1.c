#include<stdio.h>
int main(){
    int a=10, b=5;
    int*pt=&a;
    int*pt2=&b;
    printf("the value of a before %d \n",pt);
    pt=pt+1;
    printf("the value of a after %d \n",pt);
    printf("the value of a before %d \n",pt2);
    pt2=pt2-1;
    printf("the value of a after %d \n",pt2);
    printf("differece is %d",pt-pt2);
    if (pt==pt2)
    {
        printf(" equal hai bhai");
    }
    else
    {
        printf("not equal");
    }
    
    

}