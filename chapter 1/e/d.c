//   centigrade = (fahrenheit - 32) * 5/9;

#include<stdio.h>
int main(){
    float fah,cen;

    printf("enter temperature in fahrenheit");
    scanf("%f",&fah);

    cen = (fah-32) * 5/9;
    printf("\n degree in centigrade is %f",cen);

    return 0;
}
