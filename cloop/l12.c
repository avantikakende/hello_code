//right angled triangle given an integer number


#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
        for (int i=1; i<n; i++)
           {
           printf("*");
           for (int j=1; j<i+1; j++)
           {
           printf("*");
           }
           printf("\n");
           }
           return 0;
}