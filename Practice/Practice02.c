// TAKE 2 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM

#include<stdio.h>

int main(){
    int a, b;

    printf("Give First Number: ");
    scanf("%d", &a);

    printf("Give Second Number: ");
    scanf("%d", &b);

    if(a <= 0 || b <= 0){
        printf("Error! Please give positive numbers only.");
    }
    else if(a == b){
        printf("Both numbers are equal. To find the greatest number, please give two different positive numbers.");
    }
    else if(a > b){
        printf("First number is greatest.");
    }
    else{
        printf("Second number is greatest.");
    }
}
