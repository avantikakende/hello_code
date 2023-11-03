         *
       * *
     * * *  
   * * * *
 * * * * *


#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=5; i++){
	for(int j=1; j<=5; j++){
	if(i+j<=5){
	printf(" ");
	}
	else{
	printf("*");
	}
	}
	printf("\n");
	}
	return 0;
}

