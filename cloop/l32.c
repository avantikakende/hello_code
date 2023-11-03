#include<stdio.h>
int main()
{
     int tem,n,s,r;
     printf("enter a value of n: ");
     scanf("%d",&n);
     s=0;
     for (tem=n; tem>0; tem/=10){
     r=tem%10;
     s=r+s*10;
     }
     if (s==n){
     printf("palindrome\n");
     }
     else {
     printf("not palindrome\n");
     }
     return 0;
}
