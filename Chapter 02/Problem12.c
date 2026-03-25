//Programm to find out if number is divisible  5 or 3 but not 15 using nested if else
// Program to find out if number is divisible by 5 or 3 but not 15 using nested if-else
#include<stdio.h>

int main(){
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if(a % 5 == 0 || a % 3 == 0){
        
        if(a % 15 != 0){
            printf("Number is divisible by 5 or 3 but not 15\n");
        }
        else{
            printf("Number is divisible by 15, so condition not satisfied\n");
        }

    }
    else{
        printf("Number is not divisible by 5 or 3\n");
    }

    return 0;
}