#include<stdio.h>
int main()
{
	int n,i;
	int s=1;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for (i=0; i<n; i++){
	if (n%i==0){
	s=s+i;
	}
	
	if (s==n){
	printf("it is a perfect number\n");
	}
	
	else {
	printf("it is not a perfect number\n");
	}
	
	return 0;
	}
}
