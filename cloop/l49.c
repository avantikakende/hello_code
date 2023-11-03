#include<stdio.h>
int main()
{
     int n,m,s;
     printf("enter a value of n: ");
     scanf("%d",&n);
     
     printf("enter a value of m: ");
     scanf("%d",&m);
     
     s=n+m;
     if(s>15 && s<=20){
     printf("%d\n",s);
     }
     return 0;
}
