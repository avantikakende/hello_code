#include<stdio.h>
int main()
{
	int n,i;
	int c=1;
	printf("enter a value of n :");
	scanf("%d",&n);
		for (i=1; i<=n; i++){
		if (n%i==0){
		c=c+1;
		}
		if (c==2){
		printf("prime\n");
		}
		
		else {
		printf("not prime\n");
		}
		return 0;
		}  
}
