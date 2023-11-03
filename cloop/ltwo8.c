#include<stdio.h>
int main()
{
     float n,i,s;
     printf("enter a value of n: ");
     scanf("%f",&n);
     s=0;
     for (i=1; i<=n; i++){
     s=s+(1/i);
     }
     printf("%f\n",s);
     
     return 0;
}
