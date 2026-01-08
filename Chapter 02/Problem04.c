// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss.
#include <stdio.h>
int main()
{
    float cp;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    float sp;
    printf("Enter Seller Price: ");
    scanf("%f", &sp);

    if (cp < 0 || sp < 0)
    {
        printf("You have given invalid value");
    }
    else if (cp > sp)
    {
        printf("Seller made a loss");
    }
    else if (cp < sp)
    {
        printf("Seller made a profit");
    }

    else if (cp = sp)
    {
        printf("Seller made no loss, no project");
    }

    return 0;
}