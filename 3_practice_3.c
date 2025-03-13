#include<stdio.h>
int main(){
    int year;
    printf("Please enter year to check it leap or not \n");
    scanf("%d", &year);
    if ( year%4==0 && year%100){
        printf("  the year %d is leap year \n",year);
    }
    else
    {
       printf(" the year %d is not a leap year \n");
    }
    
return 0;
}