//write a loop statement to print following series  105,98,91,.... upto the 7.


#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=1; i<=7; i++)
    {
    printf("%d\n",n);
    n=n-7;
    }
    return 0;
}
