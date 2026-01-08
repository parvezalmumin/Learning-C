#include<stdio.h>
int main() {
    int x;
    printf("Give a number: ");
    scanf("%d",&x);

    if(x%5==0){
        printf("This number is divisible by 5");
    }
    else{
        printf("This number is not divisible by 5");
    }

    return 0;
}