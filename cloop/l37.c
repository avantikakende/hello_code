#include<stdio.h>
int main()
{
    int n,i,s;
    printf("enter a number n: ");
    scanf("%d",&n);
          s=0;
          for (i=1; i<=n; i++)
          {
          s=s*10+2;
          }
          printf("%d\n",s);
          return 0;
}
