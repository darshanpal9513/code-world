#include<stdio.h>
int main (){
    int marks;
    
    printf("enter the marks\n");
    scanf("%d" ,&marks);
    if (marks>=90 && marks<=100)
    {
        printf("student have grade A\n");
    }
    else if (marks>=80 && marks<90)
    {
        printf("student have grade B\n");
        //grade='B';
    }
    else if (marks>=70 && marks<80)
    {
        printf("student have grade C\n");
    
    }
    else if (marks>=60 && marks<70)
    {
        printf("student have grade D\n");

    }
    else if ( marks<60)
    {
        printf("student have grade F\n");
    } else
    {
        printf("invalid marks\n");
    }
    
    
    return 0;
}
    
    