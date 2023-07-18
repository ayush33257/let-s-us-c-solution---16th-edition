#include<stdio.h>
#include<math.h>
int main()
{
    float temp,wcf,v;
    printf("enter temperature :");
    scanf("%f",&temp);
    printf("enter wind chill factor :");
    scanf("%f",&v);
    wcf = 35.74+0.6215*temp+(0.4275*temp - 35.75) * pow(v,0.16);
    printf("wind chill factor is %f",wcf);
    return 0;
}
    