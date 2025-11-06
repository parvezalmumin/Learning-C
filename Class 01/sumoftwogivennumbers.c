 #include<stdio.h>
 int main() {
    float x;
    printf("Give a number:\n" );
    scanf("%f",&x);

    float y;
   printf("Give another number:\n" );
    scanf("%f",&y);

    float z = x + y;
    printf("Answer is: %f",z);

    return 0;
 }