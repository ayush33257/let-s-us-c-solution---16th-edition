#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("enter x coord\n");
    scanf("%f",&x);
    printf("\nenter y coord\n");
    scanf("%f",&y);
    float r = sqrt(pow(x,2.0)+pow(y,2.0));
    float w = atan(y/x);
    printf("\npolar coord is (%f , %f)",r,w);
    return 0;
}