//prinnt the sum of first 10 natural number


#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
         for (i=2; i<=n; i++)
    {
     sum=sum+i;
    }
       printf("%d\n",i);
    return 0;
}
