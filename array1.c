#include<stdio.h>
int main(){
    int arr[10];
    int*ptr=arr;
    ptr=ptr+5;
    if (ptr==&arr[5])
    {
        printf("these have same location\n");
    }
    else
    {
        printf("not have same location\n");
    }
    return 0;
    
}