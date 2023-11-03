55555
4444
333
22
1


#include<stdio.h>
int main()
{
	int n;
	printf("enter a value of n: ");
	scanf("%d",&n);
	
	for ( int i=n;i>=1; i--)
	{
	  for (int j=1; j<=i; j++) {
	  printf("%d ",i);
	}
	
	  printf("\n");
	  
	}
	
	    return 0;

}
