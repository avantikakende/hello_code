//program to find the product of digit of number accepted from the user


#include<stdio.h>
int main()
{
   int n,r,pro;
   printf("enter a number n: ");
   scanf("%d",&n);
      pro=1;
      for (n;n>0;n/=10){
      r=n%10;
      pro*=r;
      }
      printf("%d\n",pro);
      
      return 0;
}
