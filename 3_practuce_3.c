#include<stdio.h>
int main (){
    int a,b,c,d;
    printf (" enter the numbers a \n");
    scanf("%d"  ,&a);
    printf (" enter the numbers b \n");
    scanf("%d"  ,&b);
    printf (" enter the numbers c \n");
    scanf("%d"  ,&c);
    printf (" enter the numbers d \n");
    scanf("%d"  ,&d);
    if (a>b && a>c && a>d){
        printf(" the number a   is greatest %d\n",a);
    }
     else if  (b>a && b>c && b>d){
        printf(" the number   b is greatest %d\n",b);
    }
     else if  (c>b && c>a && c>d){
        printf(" the number c is greatest %d\n",c);

    }
     else if  (d>a && d>c && d>b){
        printf(" the number d  is greatest %d\n",d);
    }
    return 0;
    
}


