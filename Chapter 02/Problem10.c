// Take 3 numbers input and tell if they can be the sides of a triangle.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st Side: ");
    scanf("%d", &a);

    int b;
    printf("Enter 2nd Side: ");
    scanf("%d", &b);

    int c;
    printf("Enter 3rd Side: ");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Triangle is Valid.");
    }
    else
    {
        printf("Triangle is Invald.");
    }

    return 0;
}
/* 

Logic explanation --

Triangle inequality theorem:
For 3 sides a, b, c to form a triangle:

a + b > c

b + c > a

c + a > b

If all three conditions are true → sides can form a triangle.

If any one fails → triangle is invalid.

*/