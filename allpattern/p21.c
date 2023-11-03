1
33
555
7777
99999


#include<stdio.h>
int main()
{
	int n;
	int a=1;
	printf("enter a number n:");
	scanf("%d",&n);
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d ",a);
			
		}
		a=a+2;
		printf("\n");
	}
	return 0;
}
