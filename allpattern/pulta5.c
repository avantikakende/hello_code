0 to 14 print 


#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter a number n: ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++){
	for(int j=0; j<=n; j++){
	if(i+j<=n){
	printf(" ");
	}
	else{
	printf("%d",k);
	k++;
	}
	}
	printf("\n");
	}
	return 0;
}

