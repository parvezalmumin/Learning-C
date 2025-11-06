 #include <stdio.h>

int main() {
    float a, b, sum;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    sum = a + b;

    printf("Sum of %.2f and %.2f is %.2f", a, b, sum);

    return 0;
}
