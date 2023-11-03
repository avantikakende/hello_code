//write a program to check whether a number is armstrong or not (number is equal to sum of cube of its digit ex:  153=1^3+5^3+3^3.)


#include<stdio.h>
int main()
{
    int tem,n,s,a;
    printf("enter a value n :");
    scanf("%d",&n);
        s=0;
        for (tem=n; tem>0; tem=tem/10){
        a=tem%10;
        s=s+(a*a*a);
        }
        if (s==n){
        printf("armstrong no\n");
        }
        else {
        printf("not armstrong no\n");
        }
        return 0;
}
