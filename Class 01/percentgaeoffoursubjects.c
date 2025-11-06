 // print percantge of 4 subjects where marks are out of 40
 #include<stdio.h>
 int main(){
    
    float m1 = 34;
    float m2 = 35;
    float m3 = 37;
    float m4 = 39;
    float p = ((m1 + m2 + m3 + m4 ) / 160 ) * 100;
    printf("Percentage : %f", p);

    return 0;
 }