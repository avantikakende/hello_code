#include<stdio.h>
int main()
{
	int n,i,s;
	printf("enter a value pf a:");
	scanf("%d",&n);
	s=0;
	for (i=1; i<=n; i++){
	s=s*10+5;
	printf("%d\n",s);
	}
	return 0;
}
