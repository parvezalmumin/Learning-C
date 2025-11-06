  #include <stdio.h>

int main() {
    int a, b, remainder;

    printf("Enter two integers (a > b): ");
    scanf("%d %d", &a, &b);

    remainder = a - (b * (a / b));

    printf("Remainder when %d is divided by %d is %d\n", a, b, remainder);

    return 0;
}
