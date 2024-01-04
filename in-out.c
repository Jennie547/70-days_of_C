#include <stdio.h>
int main(void){

    printf("We will be reading input from our user!\n");

    int var1;
    double var2;
    char var3;

    printf("Let us have an integer first: ");
    scanf("%d", var1);
    printf("\nLet us have a decimal now: ");
    scanf("%.2lf", var2);
    printf("\nLet us have a letter now: ");
    scanf("%c", var3);

    return (0);
}