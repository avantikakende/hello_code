1
24
369
481216
510152025


#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
	printf("%d",j*i);
	}
	
	printf("\n");
	}
	return 0;
}

