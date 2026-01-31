//Take positive integer input and tell if it divisible by 5 and 3
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n%5==0 && n%3==0){
        printf("It is a three digit number");
    }
    else{
        printf("It is not a three digit number");
    }
}