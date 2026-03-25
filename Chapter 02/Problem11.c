//Take positive integer input and tell if it is divisible by 5 and 3 using nested if
#include<stdio.h>
int main(){
    int a;
    printf("Give a number: ");
    scanf("%d",&a);

    if(a%5==0){
         if(a%3==0){
            printf("The number is Divisible by 5 and 3");
         }

         else{
            printf("The number is not divisible by 5 and 3");
         }
    }

    else{
            printf("The number is not divisible by 5 and 3");
         }

         return 0;
}