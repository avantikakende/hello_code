55555
5555
555
55
5


#include<stdio.h>
int main()
{
	int n;
	printf("enter a value of n: ");
	scanf("%d",&n);
	
	for ( int i=n;i>=1; i--)
	{
	  for (int j=1; j<=i; j++) {
	  printf("%d ",n);
	}
	
	  printf("\n");
	  
	}
	
	    return 0;

}

