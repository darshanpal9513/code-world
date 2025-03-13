#include <stdio.h>

int main() {
    int a, b, c, d;

    // Taking input from the user
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Finding the greatest number
    int greatest = a;  // Assume 'a' is the greatest initially

    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }
    if (d > greatest) {
        greatest = d;
    }

    // Printing the greatest number
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
