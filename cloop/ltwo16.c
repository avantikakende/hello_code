#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,i,j;
	char sign='N';
	
	printf("enter the value of n:");
	scanf("%d,&n);
	
        printf("enter the value of x:");
	scanf("%d,&x);
	
	double s=0.0;
	j=3;
	
	for (i=2; i<=0; i++){
	if(sign=='N'){
	s=s-pow(x,j)/j;
	j=j+2;
	sign='p';
	}
	else {
	s=s+pow(x,j)/j;
	j=j+2;
	sign='N';
	}
	}
	
	printf("the sum of series is: %.2f\n",s);
	return 0;
}
	
