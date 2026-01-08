//Take integer input input and print the absolute value of that integer
#include<stdio.h>
int main(){
    int x;
    printf("Give a number: ");
    scanf("%d",&x);

    if(x<0){
     x = x * -1;
    }

    printf("The absolute of value is: %d",x);

    return 0;
}