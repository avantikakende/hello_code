//write a program to print first 10 integer and their square like 11,24,39,   and so on 


#include<stdio.h>
int main()
{
    int n,i,sq=0;
    printf("enter a number n: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
      sq=i*i;
      printf("%d %d\n",i,sq);
    }
    return 0;
}
