#include <stdio.h>
int main(void){

    double length, breath;
    double area = (length * breath);

    printf("Enter two values for the length and breath of the rectangle: ");
    scanf("%lf %lf", &length, &breath);

    printf("Area = %lf", area);

    return (0);
}