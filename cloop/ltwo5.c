#include<stdio.h>
int main()
{
    int n,i,p;
    printf("enter a value of n:");
    scanf("%d",&n);
         p=1;
         for (i=1; i<=n; i++){
         p=p*i;
         }
         printf("%d\n",p);
         return 0;
}
         
