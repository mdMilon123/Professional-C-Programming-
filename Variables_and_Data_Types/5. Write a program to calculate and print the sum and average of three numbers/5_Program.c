#include<stdio.h>
#include<conio.h>
int main()
{
    int num,num1,num2,sum;
    float avg;
    printf("Enter any three number:");
    scanf("%d %d %d",&num,&num1,&num2);

    sum=num+num1+num2;

    avg=sum/3.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

}
