// TAKE 4 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM
#include<stdio.h>

int main(){
    int a, b, c, d;

    printf("Give First Number: ");
    scanf("%d", &a);

    printf("Give Second Number: ");
    scanf("%d", &b);

    printf("Give Third Number: ");
    scanf("%d", &c);

    printf("Give Fourth Number: ");
    scanf("%d", &d);

    if(a <= 0 || b <= 0 || c <= 0 || d <= 0){
        printf("Error! Please give positive numbers only.");
    }
    else if(a == b && b == c && c == d){
        printf("All four numbers are equal.To find the greatest number, please give two different positive numbers.");
    }
    else if(a >= b && a >= c && a >= d){
        printf("First number is greatest.");
    }
    else if(b >= a && b >= c && b >= d){
        printf("Second number is greatest.");
    }
    else if(c >= a && c >= b && c >= d){
        printf("Third number is greatest.");
    }
    else{
        printf("Fourth number is greatest.");
    }
}
