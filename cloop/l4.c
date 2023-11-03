// given two integer m and n write program to print a solid rectangle pattern of m rows and n column using astrisk character (*) .


#include<stdio.h>
int main()
{
   int m,i,j;
   printf("enter the value of m: ");
   scanf("%d",&m);
       for (i=1; i<=m; i++){
       int n=3;
        for(j=1; j<=n; j++)
         {
            printf("*");
         }
         printf("\n");
       }
       return 0;
}



