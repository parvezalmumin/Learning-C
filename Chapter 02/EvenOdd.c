//Take positive integer input and tell if it even or odd.
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a%2==0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }

    return 0;
}
