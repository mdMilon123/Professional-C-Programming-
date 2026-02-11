#include <stdio.h>

int main() {
    int length;        // integer variable for length
    float width;       // float variable for width
    float area;        // float variable for area

    // Taking input
    printf("Enter length (integer): ");
    scanf("%d", &length);

    printf("Enter width (float): ");
    scanf("%f", &width);

    // Calculating area
    area = length * width;

    // Printing the result
    printf("Area of the rectangle = %.2f\n", area);

    return 0;
}

