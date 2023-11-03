/*
     2,6,11

#include <stdio.h>
int main() 
{
    int n = 3;
    int i;
    int currentNumber = 2;
    int difference = 4;

    for ( i = 0; i < n ; i++) {
        printf("%d\n", currentNumber);
        currentNumber += difference;
        difference += 1;
    }
    return 0;
}  */


/*
    7,3,2
    
#include <stdio.h>

int main() {
    int numbers[] = {7, 3, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i;

    for (i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}	*/

/*
	7,3,5
	
#include <stdio.h>
int main()
 {
    int numbers[] = {7, 3, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i;

    for (i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}	*/


/*
     min max
     
#include <stdio.h>
int main() 
{
    int numbers[] = {23, 69, 24, 42, 34, 47};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i, j;
    
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            printf("%d,%d\n", numbers[i], numbers[j]);
        }
    }
    int max = numbers[0];
    int min = numbers[0];
    for (i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("max: %d\n", max);
    printf("min: %d\n", min);

    return 0;
}	*/


/*
	365,753,8742
	
#include<stdio.h>
int main()
{
	int n;
	int sum=0,rem;
	printf("enter a value n:");
	scanf("%d",&n);
	
	        while(n!=0)
	 	{
	 	rem=n%10;
	 	sum=sum+rem;
	 	n=n/10;
	 	}
	 	printf("%d\n",sum);
	 	
	 	return 0;
}	*/


/*
	8964, 12321, 34002
	
#include<stdio.h>
int main()
{
	int n;
	int rev=0,rem;
	printf("enter a value n:");
	scanf("%d",&n);
	
	        while(n!=0)
	 	{
	 	rem=n%10;
	 	rev=rev*rem;
	 	n=n/10;
	 	}
	 	printf("%d\n",rev);
	 	
	 	return 0;
}	*/


#include<stdio.h>
int main()
{
	int n,n1=n;
	int rev=0,rem;
	printf("enter a value n:");
	scanf("%d",&n);
	
	        while(n!=0)
	 	{
	 	rem=n%10;
	 	rev=rev*rem;
	 	n=n/10;
	 	}
	 	printf("%d\n",rev);
	 	{
	 	n1==rev;
	 	if
	 	{
	 	printf("%d",yes);
	 	}
	 	else
	 	{
	 	printf("%d",no);
	 	}
	 	printf("\n");
	 	return 0;
}	


























	
























