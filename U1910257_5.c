#include <stdio.h>

void main(void){
    int i, num1, num2, sum =1;
    printf("Enter first Number .. \n");
    scanf("%d", &num1);
    printf("Enter Second Number .. \n");
    scanf("%d", &num2);
    for(i=1; i<=num2; i++){
        sum *=num1;
    }
    printf("%d^%d = %d\n", num1, num2, sum);

}