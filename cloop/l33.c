#include<stdio.h>
int main()
{
   float n,i,p,s;
   printf("enter a value of n: ");
   scanf("%f",&n);
   s=1;
   p=1;
   for(i=1; i<=n; i++){
        p=p*i;
   	s=s+(1/p);
   }
   printf("%f\n",s);
   return 0;
}
