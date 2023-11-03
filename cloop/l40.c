#include<stdio.h>
int main()
{
     int n,a,sum=0;
     printf("enter a number n: ");
     scanf("%d",&n);
         for (int i=2; i<=n; i++)
         {
         a=i*i;
         sum=sum+a;
         }
         printf("%d",sum);
         return 0;
}
