#include <stdio.h>

void main(void){
    int num1, num2, num3;
    printf("Enter first Number ...");
    scanf("%d", &num1);
     printf("Enter second Number ...");
    scanf("%d", &num2);
     printf("Enter third Number ...");
    scanf("%d", &num3);

    if(num1 < num2) num1 = num2;
    if(num1 < num3 ) num1 = num3;
    printf("Largest Number is %d \n", num1);
        
    
}
