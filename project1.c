#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1; // generate random number between 1-100
   // printf("the number is %d \n",number);
    do
    {
        printf(" sonal ji guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf(" sonal ji Lower number please\n");
        }
        else if (guess<number)
        {
            printf(" sonal ji Larger number please\n");
        }
        else
        {
            printf("Congrats Sonal ji correct...You guessed it in %d attempts\n ", nguesses); 
        } nguesses++;
     } while (guess!=number);
        return 0;
    }