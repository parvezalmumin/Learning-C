 #include<stdio.h>
 int main () {
    float radius;
    printf("Enter Radius: ");
    scanf("%f", &radius);
    float pi = 3.14159;
    float area = pi * radius * radius;
    printf("The Area of Circle is: %f", area);
    return 0;
    
 }