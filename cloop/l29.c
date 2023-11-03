 //write  program to print factorial number 
 
 
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter a number n: ");
    scanf("%d",&n);
        for (int i=1; i<=n; i++)
        {
        fact=fact*n;
        }
        printf("%d\n",fact);
        return 0;
}
