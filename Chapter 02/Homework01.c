// Homework 01
// Write a C program to check whether a given year is a leap year or not
// Take a year as input from the user and determine whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Leap year");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}
