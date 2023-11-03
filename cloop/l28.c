//write a program to print the fibonnacci series  till n terms (accepted from the user) 


#include<stdio.h>
int main()
{
   int n,i,a,b;
   printf("enter value of n: ");
   scanf("%d",&n);
        a=0;
        b=1;
        for (i=0; i<=n; i=a+b)
        {
           printf("%d\n",i);
               a=b;
               b=i;
        }
       
       return 0;
}


