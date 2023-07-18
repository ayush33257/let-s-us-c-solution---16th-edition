#include<stdio.h>
#include<math.h>
int main()
{
    int l1,l2,g1,g2;
    printf("enter latitude l1\n");
    scanf("%d",&l1);

    printf("enter latitude l2\n");
    scanf("%d",&l2);

    printf("enter latitude g1\n");
    scanf("%d",&g1);

    printf("enter latitude g2\n");
    scanf("%d",&g2);

    int dist = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("distance in nautical is : %d",dist);
    return 0;
}