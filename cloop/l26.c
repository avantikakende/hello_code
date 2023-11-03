//program to reverse the number accepted from user


#include <stdio.h>
int main() 
{
    int n,r;
    int s=0;
    printf("enter a number n : ");
    scanf("%d", &n);
       s=0;
       for (n; n>0; n/10 ){
       r=n%10;
       s=s*10+r;
       }
       printf("%d\n",s);
       
       return 0;
}
