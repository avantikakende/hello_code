#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a value of n: ");
	scanf("%d",&n);
	for(i=1; n>=i; i++){
	if (n%i==0){
	printf("%d\n",i);
	}
	}
	return 0;
}
