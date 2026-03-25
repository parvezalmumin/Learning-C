//If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine  the the yongest of the three using nested if else

#include<stdio.h>
int main(){

    int Ram, Shyam, Ajay;

    printf("Enter the age of Ram: ");
    scanf("%d", &Ram);

    printf("Enter the age of Shyam: ");
    scanf("%d", &Shyam);

    printf("Enter the age of Ajay: ");
    scanf("%d", &Ajay);

    if(Ram<Shyam){
        if(Ram<Ajay){
            printf("Ram is youngest.");
        }

        else {
            printf("Ajay is youngest.");
        }
    }

    else {
        if(Shyam<Ajay){
            printf("Shyam is youngest.");
        }

        else{
            printf("Ajay is youngest");
        }
    }
}