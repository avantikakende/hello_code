1
222
333
44445
55555




#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
	for(j=1; j<=i; j++){
	printf("%d",i);
	}
	if(j<=n){
	printf("%d",j);
	}
	printf("\n");
	}
	return 0;
}

