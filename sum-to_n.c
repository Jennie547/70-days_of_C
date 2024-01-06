#include <stdio.h>

int main(void){
    int n_numbers, i, sum = 0;

    printf("Enter n numbers for summing: ");
    scanf("%d", &n_numbers);

    for (i = 1; i <= n_numbers; i++){
        printf("%d + ", i);
        sum += i;
    }
    printf("= %d", sum);

    return(0);
}