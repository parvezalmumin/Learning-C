//print percentage of four subjects where marks are out of 40.
#include<stdio.h>
int main(){
    float marks01,marks02,marks03,marks04,total,percentage;
    marks01 = 37;
    marks02 = 36;
    marks03 = 38;
    marks04 = 39;
    total = marks01 + marks02 + marks03 + marks04;
    percentage = (total/160)*100;
    printf("percentage of four subjects where marks are out of 40: %f", percentage);
    return 0;
}
