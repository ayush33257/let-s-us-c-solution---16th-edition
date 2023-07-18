#include<stdio.h>
#include<math.h>
int main()
{
   float a;
   printf("enter angle\n");
   scanf("%f",&a);
   a = a/180*3.1415926535;
   printf("sin is %f\n",sin(a));
   printf("cos is %f\n",cos(a));
   printf("tan is %f\n",tan(a));
   printf("sin^-1 is %f\n",asin(a));
   printf("cos^-1 is %f\n",acos(a));
   printf("tan^-1 is %f\n",atan(a));
    return 0;
}

