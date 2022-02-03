#include <stdio.h>

int main(){
    int i, num, counter=0;
    printf("\nEnter the number you want to find whether prime or not ... \n");
    scanf("%d", &num);
    for(i=1; i<= num; i++){
        if(num % i == 0){
            counter++;
        }
    }
    if(counter == 2){
        printf("Number is prime!\n");
    }else{
        printf("Number is not prime!\n");
    }
    return 0;
}