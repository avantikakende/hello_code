#include<stdio.h>
int main()
{
      int n,r;
      printf("enter a value of n: ");
      scanf("%d",&n);
      for (n; n>0; n=n/10){
      r=n%10;
      
      printf("%d\n",r);
      }
      return 0;
}
      
