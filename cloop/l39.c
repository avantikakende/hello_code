#include<stdio.h>
int main()
{
       int n,p,sum=0;
       printf("enter a number n: ");
       scanf("%d",&n);
            for (int i=1; i<=n; i++)
            {
            p=i*i*i;
            sum=sum+p;
            }
            printf("%d", sum);
            return 0;
}
