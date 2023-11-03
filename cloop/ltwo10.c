#include<stdio.h>
int main()
{
     int a,b,p,r,l,h;
     printf("enter a value of a: ");
     scanf("%d",&a);
     
     printf("enter a value of b: ");
     scanf("%d",&b);
     p=a*b;
     for (b; b>0; b=r){
     r=a%b;
     a=b;
     }
     h=a;
     l=p/h;
     
     printf("%d\n%d\n",h,l);
     return 0;
}
     
