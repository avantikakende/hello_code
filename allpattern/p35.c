1*2*3*4*5


#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number n: ");
	scanf("%d", &n);
	
	for(int i=5; i>=n; i--){
	for(int j=1; j<=i; j++){
	printf("%d",j);
	
	if(j<i){
	printf("*");
	}
	}
	printf("\n");
	}
	return 0;
}

