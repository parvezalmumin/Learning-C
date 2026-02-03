/// TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM

#include<stdio.h>

int main(){
    int a, b, c;

    printf("Give First Number: ");
    scanf("%d", &a);

    printf("Give Second Number: ");
    scanf("%d", &b);

    printf("Give Third Number: ");
    scanf("%d", &c);

    if(a <= 0 || b <= 0 || c <= 0){
        printf("Error! Please give positive numbers only.");
    }
    else if(a == b && b == c){
        printf("All three numbers are equal.To find the greatest number, please give two different positive numbers.");
    }
    else if(a >= b && a >= c){
        printf("First number is greatest.");
    }
    else if(b >= a && b >= c){
        printf("Second number is greatest.");
    }
    else{
        printf("Third number is greatest.");
    }
}
