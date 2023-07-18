#include<stdio.h>
int main()
{
    int num;
    printf("Enter five digit number");
    scanf("%d",&num);
    int sum = 0;
    while(num>0)
    {
        sum = num%10 + sum;
        num = num/10;
    }
    printf("\n sum of digit is %d",sum);
    return 0;
}