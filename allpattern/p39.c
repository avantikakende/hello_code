            1
           12
          123  
         1234
        12345 


#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter a value n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
	k=1;
	for(int j=1; j<=n; j++){
	if(j+i<=n){
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

