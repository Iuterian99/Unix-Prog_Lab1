#include <stdio.h>

void main(void){
int num;
printf("Enter the Number that you want to know even or odd ... \n");
scanf("%d", &num);
if(num % 2 == 0) printf("%d is even!\n", num);
else{printf("%d is odd!\n", num);}
}