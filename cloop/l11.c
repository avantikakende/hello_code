//n write a program which reads n input and prints the product of the given input integer.


#include<stdio.h>
int main()
{
     int n,i,a,p=1;
     printf("enter the value of n: ");
     scanf("%d",&n);
        for (i=0; i<n; i++)
        {
        scanf("%d",&a);
        p=p*a;
        }
        printf("%d\n",p);
        return 0;
}
