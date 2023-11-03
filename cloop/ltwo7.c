/*   #include<stdio.h>
int main()
{
     int i,n,a;
     printf("enter a value of a: ");
     scanf("%d",&n);
          for (i=1; i<=n; i++){
          a=i*i;
          }
          printf("%d\n",a);
          return 0;
}  */


#include<stdio.h>
int main()
{
     int n,i,s,c;
     printf("enter a value of n: ");
     scanf("%d",&n);
     for (i=3; c<=n; i=i+3){
     s=s+(i*i);
     c=c+1;
     }
     printf("%d\n",s);
     return 0;
}
