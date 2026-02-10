#include <stdio.h>

int main()
{
    char str[50];
    int i = 0;
    int capital = 0, small = 0, digit = 0;

    printf("Enter a string: ");
    gets(str);   // exam purpose

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            capital++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            small++;
        else if(str[i] >= '0' && str[i] <= '9')
            digit++;

        i++;
    }

    printf("Number of capital letters : %d\n", capital);
    printf("Number of small letters   : %d\n", small);
    printf("Number of digits          : %d\n", digit);

    return 0;
}
