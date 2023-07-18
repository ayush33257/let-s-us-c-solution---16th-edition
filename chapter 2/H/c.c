#include<stdio.h>
#include<math.h>
int main()
{
    int side1, side2, side3;
    printf("\nenter length of side 1:");
    scanf("%d",&side1);

    printf("\nenter length of side 2:");
    scanf("%d",&side2);

    printf("\nenter length of side 3:");
    scanf("%d",&side3);
     
    int s = (side1+side2+side3);
    int area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    printf("\n area is %d",area);
    return 0;
}