#include<stdio.h>
int main(){
    // decleare size
    float A0_length, A0_breadth;
    float A1_length, A1_breadth;
    float A2_length, A2_breadth;
    float A3_length, A3_breadth;
    float A4_length, A4_breadth;
    float A5_length, A5_breadth;
    float A6_length, A6_breadth;
    float A7_length, A7_breadth;
    float A8_length, A8_breadth;

    // define
    A0_length = 1189; A0_breadth =841;
    A1_length = A0_breadth; A1_breadth = A0_length/2;
    A2_length = A1_breadth; A2_breadth = A1_length/2;
    A3_length = A2_breadth; A3_breadth = A2_length/2;
    A4_length = A3_breadth; A4_breadth = A3_length/2;
    A5_length = A4_breadth; A5_breadth = A4_length/2;
    A6_length = A5_breadth; A6_breadth = A5_length/2;
    A7_length = A6_breadth; A7_breadth = A6_length/2;
    A8_length = A7_breadth; A8_breadth = A7_length/2;

    // printing
    printf("\npaper of size A0 have dimension : %f mm X %fmm",A0_length,A0_breadth);
    printf("\npaper of size A1 have dimension : %f mm X %fmm",A1_length,A1_breadth);
    printf("\npaper of size A2 have dimension : %f mm X %fmm",A2_length,A2_breadth);
    printf("\npaper of size A3 have dimension : %f mm X %fmm",A3_length,A3_breadth);
    printf("\npaper of size A4 have dimension : %f mm X %fmm",A4_length,A4_breadth);
    printf("\npaper of size A5 have dimension : %f mm X %fmm",A5_length,A5_breadth);
    printf("\npaper of size A6 have dimension : %f mm X %fmm",A6_length,A6_breadth);
    printf("\npaper of size A7 have dimension : %f mm X %fmm",A7_length,A7_breadth);
    printf("\npaper of size A8 have dimension : %f mm X %fmm",A8_length,A8_breadth);


    return 0;
}
