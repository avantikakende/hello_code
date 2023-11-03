// write a program to print rectangle form of m rows and n column using the plus character (+) 

#include<stdio.h>
int main()
{
     int n,m,i,j;
     printf("enter the value n: ");
     scanf("%d",&n);
     printf("enter the value m: ");
     scanf("%d",&m);
         for (i=0; i<n; i++)
         {
         for (j=0; j<m; j++)
         {
         printf("+");
         }
         printf("\n");
         }
         return 0;
}
         
