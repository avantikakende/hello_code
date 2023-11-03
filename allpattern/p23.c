1
21
321
4321
54321


#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
	for(int j=i; j>=1; j--){
	printf("%d ",j);
	}
	printf("\n");
	}
	return 0;
}
