//Homework 02
// Write a programme to tell if profit is made or loss
#include<stdio.h>

int main(){
    int cp, sp;

    printf("Enter Cost Price: ");
    scanf("%d", &cp);

    printf("Enter Selling Price: ");
    scanf("%d", &sp);

    if(sp > cp){
        printf("Profit is made.");
    }
    else if(sp < cp){
        printf("Loss is made.");
    }
    else{
        printf("No profit, no loss.");
    }
}
