2 4 6 8 10 12 14 16 18 20


#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    
    for (int i=2; i<=n; i++)
    {
      for (int j=1; j<=10; j++)  {
      printf("%d ", i*j);
    }
      printf("\n");
    }
    return 0;
}
      
