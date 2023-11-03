 //write a program to print the factorial of N 
 
 
#include<stdio.h>
int main()
{
     int n,f;
     printf("enter the number n: ");
     scanf("%d",&n);
         for ( f=1  ; n>0; n=n-1){
              f=f*n;
         }
         printf("%d\n",f);
         return 0;
}
