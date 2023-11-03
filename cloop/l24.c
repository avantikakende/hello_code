//write program to find the sum the digit of number accepted from the user.


#include <stdio.h>
int main() 
{
    int n,r;
    int s=0;
    printf("enter a value of a: ");
    scanf("%d",&n);
       for (n; n>0; n=n/10){
       r=n%10;
       s=s+r;
       }
       printf("%d\n",s);
       return 0;
}

