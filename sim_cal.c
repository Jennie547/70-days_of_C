#include <stdio.h>

int main(void){

    printf("MY SIMPLE CALCULATOR!\n");

    int num1, num2;
    char operator;
    
    printf("Enter operator: ");
    scanf("%c", &operator);
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator){
        case '+':
            printf("%d + %d = %d", num1, num2, (num1+num2));
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, (num1-num2));
            break;
        case '*':
            printf("%d X %d = %d", num1, num2, (num1*num2));
            break;
        case '/':
            printf("%d / %d = %d", num1, num2, (num1/num2));
            break;
        default:
            printf("ERROR!!!");
    }

    return(0);
}