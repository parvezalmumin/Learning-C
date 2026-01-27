//Give the Length and Breadth of a Rectangle,write  a program  to find whether the area of the rectangle is greater than its perimeter.

#include <stdio.h>

int main() {
    int l;
    printf("Enter Length: ");
    scanf("%d", &l);
    
    int b;
    printf("Enter Breadth: ");
    scanf("%d", &b);

    int a = l * b;
    int p = 2 * (l + b);

    if(a > p){
        printf("Area is greater than Perimeter\n");
    }
    else{
        printf("Area is not greater than Perimeter\n");
    }

    return 0;
}
