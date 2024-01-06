#include <stdio.h>
int main(void){
    int number, factorial = 1;

    printf("Enter any number: ");
    scanf("%d", &number);

    while (number != 0){
        if (number == 1){
            printf("%d = ", number);
        }
        else{
        printf("%d X ", number);
        }
        factorial *= number;
        number--;
    }
    printf("%d", factorial);

    return (0);
}