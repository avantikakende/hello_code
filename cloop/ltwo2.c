#include<stdio.h>
int main()
{
       int n,i,sum=0;
       printf("enter a number n: ");
       scanf("%d",&n);
        for (i=1; i<=n; i++){
        if (i%2==0){
        sum=sum+i;
           }
           }
           printf("%d\n",sum);
           return 0;
}
           
