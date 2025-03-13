#include<stdio.h>
int main(){
    float income;
    printf("enter your income\n");
    scanf("%f" ,&income);
    if (income>=2.5 && income<5.0)
    {
        printf("Please pay tax of 5 percentage of %f\n",income);
        
    }
    
     else if (income>=5.0 && income<10.0)
    {
        printf("Please pay tax of 20 percentage of  %f\n",income);
    }
    
   else if (income>=10.0)
    {
        printf("Please pay tax of 30 percentage of  %f\n",income);
    }
    else
    {
        printf("you are tax free\n");
    }
    
    return 0;
    
    
}