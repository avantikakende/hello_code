1
4 4
9 9 9
16 16 16 16



#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n:");
	scanf("%d",&n);
	
	for(int i=1; i<=4; i++){
	for(int j=1; j<=i; j++){
	printf("%d ",i*i);
	}
	printf("\n");
	}
	return 0;
}
