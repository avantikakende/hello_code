#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	for (int i=2; i<=n-1; i++) {
	    if (n%i==0){
	       printf("given number is composite\n");
	       break;
	       }
	     }
	     return 0;
}
