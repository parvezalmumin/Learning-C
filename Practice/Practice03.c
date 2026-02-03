// Write a program to calculate profit or loss and print the amount

#include<stdio.h>

int main(){
    int cp, sp;

    printf("Enter Cost Price: ");
    scanf("%d", &cp);

    printf("Enter Selling Price: ");
    scanf("%d", &sp);

    if(sp > cp){
        int profit = sp - cp;
        printf("Profit is made.\n");
        printf("Your profit is %d.\n", profit);
    }
    else if(sp < cp){
        int loss = cp - sp;
        printf("Loss is made.\n");
        printf("Your loss is %d.\n", loss);
    }
    else{
        printf("No profit, no loss.\n");
    }

    return 0;
}
