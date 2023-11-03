#include<stdio.h>
int main()
{
     int n,s,i;
     printf("enter a value of n: ");
     scanf("%d",&n);
     s=0;
     for (i=100; i<=n;){
     s=s+i;
     i=i+2;
     }
     printf("%d\n",s);
     
     return 0;
}
