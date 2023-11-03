         1
        22
       333    
      4444
     


#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
	for(int j=1; j<=n; j++){
	if(i+j<=n){
	printf(" ");
	}
	else{
	printf("%d",i);
	}
	}
	printf("\n");
	}
	return 0;
}

