#include<stdio.h>
int main()
{
    int c,d;
    printf("enter value in c\n");
    scanf("%d",&c);
    
    printf("enter value in d\n");
    scanf("%d",&d);
    //this also works
    // int temp = c;
    // c = d;
    // d = temp;
    c = c+d;
    d = c-d;
    c = c-d;
    printf("the value of c is : %d\n",c);
    printf("the value of d is : %d",d);
    return 0;
}