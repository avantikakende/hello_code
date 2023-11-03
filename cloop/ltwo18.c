#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,m;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	m=10;
	for(int j=1; j<=m; j++){
	for(i=1; i<=n; i++){
	
	printf("%d*%d=%d\t",i,j,i*j);
	}
	printf("\n");
	}
	return 0;
}
