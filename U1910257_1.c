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
        printf("%d is prime!\n", num);
    }else{
        printf("%d is not prime!\n", num);
    }
    return 0;
}