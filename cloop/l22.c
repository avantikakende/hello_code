//write a program to display all even number that fall between two numbers 


#include<stdio.h>
int main()
{
   int m,n,i,p;
   printf("enter the number m: ");
   scanf("%d",&m);
   
   printf("enter the number n: ");
   scanf("%d",&n);
        for (i=1; m<=n; m++)
        {
        if (m%2==0){
        printf("%d\n",m);
        }
        }
        return 0;
}
