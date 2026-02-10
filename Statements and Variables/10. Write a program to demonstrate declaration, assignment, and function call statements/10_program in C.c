#include<stdio.h>
#include<conio.h>
void green()
{
    printf("Welecome to C programming");
}
int main()
{
    int a = 5, b = 10;  // declaration + assignment
    int sum = a + b;    // assignment
    printf("Sum = %d\n", sum);

    green();//funtion is call
    getch();

}
