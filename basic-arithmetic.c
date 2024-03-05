#include <stdio.h>
int main(void){

    double num1, num2;
    double add = (num1 + num2);
    double sub = (num1 - num2);
    double mul = (num1 * num2);
    double div = (num1 / num2);

    printf("enter 2 number: ");
    scanf("%lf %lf", &num1, &num2);

    printf("ADDITION: \n");

    printf("%lf + %lf = %lf\n", num1, num2, add);

    printf("SUBTRACTION: \n");

    printf("%lf - %lf = %lf\n", num1, num2, sub);

    printf("MULTIPLICATION: \n");

    printf("%lf * %lf = %lf\n", num1, num2, mul);

    printf("DIVISION: \n");

    printf("%lf / %lf = %lf", num1, num2, div);

    return (0);
}