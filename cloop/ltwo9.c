#include<stdio.h>
int main()
{
     int m,n,p,q,s;
     printf("enter the value of m:");
     scanf("%d",&m);
     
     printf("enter the value of n:");
     scanf("%d",&n);
     
     printf("enter the value of p:");
     scanf("%d",&p);
     
     printf("enter the value of q:");
     scanf("%d",&q);
     
     s=0;
     for (m; m<n; m++){
     if (m%p==0){
     if (m%q==0){
     s=s+m;
     }
     }
     }
     printf("%d\n",s);
     return 0;
}
     
