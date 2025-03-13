#include<stdio.h>
int main(){
    int arr[10];
    int*ptr=arr;
    ptr=ptr+2;
    if (ptr==&arr[2])
    {
        printf("these have same location\n");
    }
    else
    {
        printf("not have same location\n");
    }
    return 0;
    
}