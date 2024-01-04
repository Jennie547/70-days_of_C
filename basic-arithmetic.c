#include <stdio.h>
int main(void){

    printf("ADDITION: \n");

    int num1, num2, add = (num1+num2), sub = (num1-num2);
    printf("enter 2 number: ");
    scanf("%d %d", num1, num2);

    printf("%d + %d = %d", num1, num2, add);

    printf("SUBTRACTION: \n");

    printf("%d - %d = %d", num1, num2, add);

    printf("MULTIPLICATION: \n");

    printf("%d * %d = %d", num1, num2, add);

    printf("DIVISION: \n");

    printf("%d / %d = %d", num1, num2, add);

    return (0);
}