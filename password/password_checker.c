#include <stdio.h>
#include <string.h>

void main() {
    char s[99];
    char symbols[] = "!@#$%^&*()-_+=";
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter a test password: ");
   scanf("%98s", s);
    for (size_t i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z'){
        upper = 1;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower = 1;
        }
        if (s[i] >= '0' && s[i] <= '9') 
        {digit = 1;
        }
        if (strchr(symbols, s[i]) != NULL)
        {
            special = 1;
    }
    }

    if (strlen(s) < 12) 
    printf("Use at least 12 characters.\n");
    if (!upper) 
    printf("Add an uppercase letter.\n");
    if (!lower) 
    printf("Add a lowercase letter.\n");
    if (!digit)
    printf("Add a number.\n");
    if (!special)
     printf("Add a special character.\n");

    if (strlen(s) >= 12 && upper && lower && digit && special) {
        printf("Passes all checks.\n");
    }

}