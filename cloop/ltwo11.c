#include<stdio.h>
int main()
{
	int n,s,r;
	printf("enter a value of n: ");
	scanf("%d",&n);
	s=0;
	for (n; n>0; n=n/10)
	{
	r=n%10;
	s=s+r;
	}
	printf("%d\n",s);
	return 0;
}
