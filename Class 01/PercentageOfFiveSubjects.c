 //percentage of five subjects
// 
 
 #include<stdio.h>
 int  main () {

    float m1 = 90;
    float m2 = 91;
    float m3 = 92;
    float m4 = 93;
    float m5 = 94;
  float p = (m1 + m2 + m3 + m4 + m5)/5;               // all subjects are out of 100,then the mean = percentage, because:
                                                     // ( sum of marks / 5 ) = ( sum of marks / 500 ) × 100
    printf("Percentage is: %f", p);                 // They both give the same value.So in this case, your code is fine — it does represent the percentage.
                                                  // Mean formula:
    return 0;                                    //  Mean = Sum of all values divided by the total number of values
                                                // Percentage formula:
 }                                            // Percentage = (Obtained value divided by Total value) multiplied by 100