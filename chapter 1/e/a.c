#include<stdio.h>
int main(){
    int salary;
    printf("enter salary");
    scanf("%d",&salary);
    int dearness = salary*40/100;
    int rent = salary*20/100;
    int gross_salary = salary + dearness + rent;
    printf("\n goss salary is %d",gross_salary);
    return 0;
}