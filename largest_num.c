#include <stdio.h>

int main(void){

    int first_num, second_num, third_num;

    printf("Enter three values: \n");
    scanf("%d %d %d", &first_num, &second_num, &third_num);

    if (first_num > second_num && first_num > third_num){
        printf("first_num, %d is the largest number", first_num);
    }
    else if (second_num > first_num && second_num > third_num){
        printf("second_num, %d is the largest number", second_num);
    }
    else if (third_num > first_num && third_num > second_num){
        printf("third_num, %d is the largest number", third_num);
    }
    else{
        printf("Two or more numbers are equal!");
    }

    return(0);
}