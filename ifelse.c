#include <stdio.h>
#include <string.h> // For strcmp function

int main() {
    char name[50]; // Array to store the name
    printf("Enter the name:\n");
    scanf("%s", name);

    if (strcmp(name, "heeriye") == 0) { // Use strcmp to compare strings
        printf("She is the most beautiful person.\n");
    }
    else{
        printf("SORRY DARSH IS PERSONAL PRPOPERTY OF HEERIYE\n");
    }

    return 0;
}
