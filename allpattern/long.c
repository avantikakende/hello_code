#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("enter a value n:");
	scanf("%d",&n);
	c=1;
	for(i=0; i<n; i++){
	for(j=i; j<n; j++){
	if(i%2==0){
	printf("%d",c);
	c++;
	}
	else{
	printf("%d",c);
	c--;
	}
	if(i==1){
	c=c+3;
	printf("\n");
	printf(" ");
	}
	if(i==1){
	c=c+5;
	printf("\n");
	printf(" ");
	}
	else{
	c=c+1;
	printf("\n");
	printf(" ");
	}
	}
	}
	return 0;
}

