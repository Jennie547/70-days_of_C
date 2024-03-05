#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    char s[100];
    char str[100];

    printf("Enter a character a string and a bunch of strings: ");

    // Read inputs
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n"); // Clear the input buffer
    scanf("%[^\n]%*c", str);

    printf("You entered: \n");
    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", str);

    return (0);
}
