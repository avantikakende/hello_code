#include<stdio.h>
int main()
{
     float n,s,i,f;
     printf("enter a value of n: ");
     scanf("%f",&n);
     s=0;
     f=1;
     for(i=1; i<=n; i++){
     f=f*i;
     s=s+(1/f);
     }
     printf("%f\n",s);
     
     return 0;
}
