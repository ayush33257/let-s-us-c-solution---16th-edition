#include<stdio.h>
int main()
{
    int num;
    printf("enter 5 digit number");
    scanf("%d",&num);
    int sum = 0;
    while(num>0)
    {
        sum = sum*10 + num%10;
        num = num / 10;
    }
    printf("reverse is %d",sum);
    return 0;
}