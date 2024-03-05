#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numIsPrime(int number){
    if(number <= 1){
        return(0);
    }
    for(int i = 2; i * i <= number; ++i){
        if(number % i == 0){
            return(0);
        }
    }
    return(1);
}

int main(void){

    //int randnum;
    //srand(time(NULL));
    //randnum = rand();
    
    int number;
    printf("Enter any positive integer: ");
    scanf("%d", &number);

    if(numIsPrime(number)){
        printf("%d is a prime number.", number);
    }
    else{
        printf("%d is not a prime number.", number);
    }
    
    return(0);
}