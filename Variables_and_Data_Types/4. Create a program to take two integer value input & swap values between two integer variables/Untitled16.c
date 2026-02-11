#include <stdio.h>
#include<conio.h>
int main() {
    int a, b, temp;

    // Taking input
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    // Printing swapped values
    printf("After swapping:\n");
    printf("First integer: %d\n", a);
    printf("Second integer: %d\n", b);

    getch();
}
