#include <stdio.h>
int main() {
    char str[50];
    int i;

   printf("Enter the uppercase :");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("Lowercase: %s", str);
    return 0;
}
