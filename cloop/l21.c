//write a program to print a table of number entered from the user


#include<stdio.h>
int main()
{
    int n,i,t,a;
    printf("enter a number n : ");
    scanf("%d",&n);
    a=10;
    for (i=1; i<=a; i++){
    t=n*i;
    printf("%d\n",t);
    }
         return 0;
}
