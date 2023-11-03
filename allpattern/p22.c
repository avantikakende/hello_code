01
012
0123
01234
012345


#include<stdio.h>
int main()
{
 	int n;
 	printf("enter a value of n:");
 	scanf("%d",&n);
 	
 	for (int i=0; i<=n; i++){
 	for (int j=0; j<=i; j++){
 	printf("%d",j);
 	}
 	printf("\n");
 	}
 	return 0;
}
