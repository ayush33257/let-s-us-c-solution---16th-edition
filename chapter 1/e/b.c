// Meters:         1 km = 1000 m
// Feet:           1 km = 3280.84 ft
// Inches:         1 km = 39370.1 inches
// Centimeters:    1 km = 100000 cm

#include<stdio.h>
int main(){
    float km,m,feet,inch,cent;
    printf("enetr km");
    scanf("%f",&km);

    m = km*1000;
    feet = km*3280.84;
    inch = km*39370.1;
    cent = km*100000;
    printf("\n%f km in meter %f",km,m);  
    printf("\n%fkm in feets %f",km,feet);
    printf("\n%fkm in inches %f",km,inch);
    printf("\n%fkm in centimeter %f",km,inch);

    return 0;
}