#include <stdio.h>
#include<conio.h>
int main() {
    float price1, price2, price3, total;

    // Taking input for item prices
    printf("Enter price of first item: ");
    scanf("%f", &price1);

    printf("Enter price of second item: ");
    scanf("%f", &price2);

    printf("Enter price of third item: ");
    scanf("%f", &price3);

    // Calculating total cost
    total = price1 + price2 + price3;

    // Printing total cost
    printf("Total cost = %.2f\n", total);

    getch();
}

