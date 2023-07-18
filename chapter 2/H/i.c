#include<stdio.h>
int main()
{
    int n;
    int re1 = 1;
    int re2 = 2;
    int re3 = 5;
    int re4 = 10;
    int re5 = 50;
    int re6 = 100;
    
    printf("enter amount");
    scanf("%d",&n);

             re6 = n/100;
               n=n%100;
        
               re5 = n/50;
               n=n%50;
        
               re4 = n/10;
               n=n%10;
        
               re3 = n/5;
               n=n%5;
        
               re2 = n/2;
               n=n%2;
          
        
               re1 = n/1;
               n=n%re1;
        
    
    printf("\nnumber of notes is %d",(re1+re2+re3+re4+re5+re6));
    
    return 0;
}


