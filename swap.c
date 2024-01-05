#include <stdio.h>

int main(void){

    printf("Swap two values\n");

    int value1 = 5, value2 = 8;

    printf("Value1 = %d and Value2 = %d\n", value1, value2);

    value1 = value2 + value1;
    value2 = value1 - value2;
    value1 = value1 - value2;

    printf("Value1 = %d and Value2 = %d", value1, value2);

    return(0);
}