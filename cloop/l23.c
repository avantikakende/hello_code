//program to check whether prime or not 


#include<stdio.h>
int main()
{
   int n,i,c;
   printf("enter a number n: ");
   scanf("%d",&n);
        for (i=1; i<=n; i++)
        {
        if(n%i==0)
        {
        c=c+1;
        }
        }
        if(c==2)
        {
        printf("Prime \n");
        }
        else
        {
        printf("Not Prime \n");
        }
        return 0;
}
        
