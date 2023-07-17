#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,per,aggr_mark;

    printf("enter marks in 5 subject:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    aggr_mark = (m1+m2+m3+m4+m5)/5.0;
    per = aggr_mark/(100.0*500.0);
    
    printf("\naggregate marks is %f:",aggr_mark);
    printf("\n percentage is %f:",per);
    return 0;
}