 #include<stdio.h>
 int main() {
    float principle,rate,time,si;
        printf("Enter Principle: ");
    scanf("%f",&principle);
     printf("Enter Rate: ");
      scanf("%f",&rate);
      printf("Enter Time: ");
        scanf("%f",&time);
        si = (principle * rate * time ) / 100;
        printf("Simple Interest =  %f", si);
        return 0;

 }