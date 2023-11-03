#include<stdio.h>
int main()
{
	int n;
	printf("enter a value of n:");
	scanf("%d",&n);
	
	for (int i=1; i>0; i++)
	for (int j=1; j<=i; j++){
	
	for (int j=i-1; j>=1; j--) {
            printf("%d ", j);
        }
	     printf("%d", n);
	  {
	     printf("\n");
	  }
	  
	  return 0;
}
}	
	
