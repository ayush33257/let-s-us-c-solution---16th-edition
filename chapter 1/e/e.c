#include<stdio.h>
int main(){
    int len,brd;
    float radi;
    printf("enter length, breadth and radius");
    scanf("%d%d%f",&len,&brd,&radi);

    int area_rec = len*brd;
    int per = 2*(len+brd);
    float area_cir = 3.14*radi*radi;
    float circum_fr = 2*3.14*radi;

    printf("\narea of rectagle is %d",area_rec);
    printf("\nperimeter of rectangle is %d",per);
    printf("\narea of circle is %f",area_cir);
    printf("\ncircumference of circle is %f",circum_fr);

    return 0;
}
