#include <stdio.h>

void main(void){
    int i, num, sum = 1;
    printf("Enter the Number You want to find its factorial .. \n");
    scanf("%d", &num);
    for(i = 1; i<=num; i++){
        sum *= i;
    }
    printf("%d! = %d \n", num, sum);
}