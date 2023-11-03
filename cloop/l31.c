#include<stdio.h>
#include<math.h>

int main()
{
   int n,i,s,r;
   printf("enter value of n: ");
   scanf("%d",&n);
   s=0;
   for (i=0; n!=0; i++){
        r=n%10;
        s=s+r*pow (2,i);
        n=n/10;
    }
    printf("%d",s);
    
    return 0;
}
