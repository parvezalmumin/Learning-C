//Take two integers input , a and b: a > b , and find the remainder when a is divided by b and print the remainder (without modulus)

#include<stdio.h>
int main(){
    int a,b;
    printf("Give the first number: ");
    scanf("%d", &a);
     printf("Give the second number: ");
    scanf("%d", &b);
    int q = a/b;
    int r = a - (b*q);
    printf("Remainder: %d", r);
    return 0;
}