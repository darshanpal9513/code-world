#include<stdio.h>
void aagopacho( int *arr,int n){
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
       temp=arr[i];
       arr[i]=arr[n-1-i];
       arr[n-1-i]=temp;
    }}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    aagopacho( arr,7);
    for (int i = 0; i < 7; i++)
    {
        printf("the value of %d element is : %d\n",i,arr[i]);
    }
    return 0;

}