  // given an integer number n as input write a program to print sum of first n natural number
  
  
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
        for (int i=1; i<=n; i++)
        {
        (sum=sum+i);
        }
        printf("%d", sum);
        return 0;
}
