#include <stdio.h>

int main() {
    float a;
    printf("Give a floating-point number: ");
    scanf("%f", &a);

    int b;
    b = (int)a;

    float c;
    c = a - b;

    printf("Integer part = %d\n", b);
    printf("Fractional part = %f", c);

    return 0;
}
