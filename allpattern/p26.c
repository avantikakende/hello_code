#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
	for(int j=i; j<=i; j++){
	if (i+j<=5){
	printf(" ");
	}
	else{
	printf(" * ");
	}
	}
	printf("\n");
	}
	return 0;
}
