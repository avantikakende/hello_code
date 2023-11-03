//print the 10 natural number in reverse order


#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number : ");
    scanf("%d",&n);
    for (i=n; i>=1; i--)
    {
      printf("%d\n",i);
    }
    return 0;
}
