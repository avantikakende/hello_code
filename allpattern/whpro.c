/*

#include<stdio.h>
int main()				hcf/
{
	int n,a,hcf,b,r,i;
	printf("enter a value n:");
	scanf("%d",&n);
	
	printf("enter a value a:");
	scanf("%d",&a);
	
	hcf=a;
	for(i=1; i<=n; i++)
	{
	
	        if(b>0)
	        {
		r=(a%b);
		a=b;
		b=r;
	        }
	}
	printf("%d\n",hcf);
	
	return 0;
}		*/


/*
			sum,mul/

#include<stdio.h>
int main()
{
	int n,m,s,r;
	printf("enter value n: ");
	scanf("%d",&n);
	s=0;
	m=1;
	for(n; n>0; n=n/10)
	{
	   if(n%2==0)
	   {
	   r=n%10;
	   s=s+r;
	   }
	   	else {
	   	r=n%10;
	   	m=m*r;
	   	}
	   	}
	   	printf("sum=%d\n",s);
	   	printf("mul=%d\n",m);
	   	
	   	return 0;
}				*/


/*
			min,max/
#include<stdio.h>
int main()
{
	int n,a,i,min,max;
	printf("enter value n;");
	scanf("%d",&n);
	
	printf("enter value a;");
	scanf("%d",&a);
	
	min=a;
	max=a;
	
	for(i=1; i<n; i++)
	{
	     printf("enter value a;");
	     scanf("%d",&a);
	
		if(a>min){
		max=a;
		}
		else if(a<min)
		{
		min=a;
		}
	}
	printf("%d %d",min,max);
	
	return 0;
}			*/
	

/*
			smax/
#include<stdio.h>
int main()
{
	int n,a,max,smax;
	printf("enter a value n:");
	scanf("%d",&n);
	
	max=0;
       smax=0;
	
	for(int i=1; i<=n; i++)
	{
		printf("enter a value a:");
	        scanf("%d",&a);
	        
	        if(a>max)
	        {
	        smax=max;
	        max=a;
	        }
	        else if(a>smax)
	        {
	        smax=a;
	        }
	}
	printf("%d\n",smax);
	
	return 0;
}			*/
	        
	        
	        
/*
			tmax/	                
#include<stdio.h>
int main() 
{
    int n, a, max, smax, tmax;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    max = 0;
    smax = 0;
    tmax = 0;

    for (int i = 1; i <= n; i++) {
        printf("Enter a value: ");
        scanf("%d", &a);

        if (a > max) {
            tmax = smax;
            smax = max;
            max = a;
        } else if (a > smax) {
            tmax = smax;
            smax = a;
        } else if (a > tmax) {
            tmax = a;
        }
    }

    printf(" %d\n", tmax);

    return 0;
}		*/


/*
			prime/
#include<stdio.h>
int main()
{
	int n,m,j,k;
	float c;
	printf("enter a value n:");
	scanf("%d",&n);
	
	printf("enter a value m:");
	scanf("%d",&m);
	c=0;
	    for(m; m<n; m++)
	    {
	    	j=0;
	    	k=0;
	    	
	    	for(j; j<=m; j++)
	    	{
	        
	        if(m%j==0)
	        {
	        k++;
	        }
	        if(k==2)
	        {
	        c++;
	        }
	}
	
	printf("%d\n",k);
	
	}
	
	return 0;
}			*/		
	        

/*
	        	prime no/
#include<stdio.h>
#include<math.h>	        
int main()
{
	int n,i,s,x;
	printf("enter value n:");
	scanf("%d",&n);
	
	printf("enter value x:");
	scanf("%d",&x);
	
	s=x;
	for(i=1; i<=n; i++)
	{
	s=s+(pow(s,i)/i);
	}
	
	printf("%d\n",s);
	
	return 0;
}			*/
		        
		        

/*			factor/
		        
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void printPrimeFactors(int num) {
    printf("Prime factors of %d are: ", num);

    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int N;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    printPrimeFactors(N);

    return 0;
}		*/
	        
	

/*
			fibonaci/
#include <stdio.h>
void printFibonacciNumbers(int N) {
    int num1 = 0, num2 = 1, nextNum;

    printf("The first %d Fibonacci numbers are: ", N);


    printf("%d %d ", num1, num2);

    for (int i = 3; i <= N; i++) {
        nextNum = num1 + num2;
        printf("%d ", nextNum);
        num1 = num2;
        num2 = nextNum;
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printFibonacciNumbers(N);

    return 0;
}		*/



#include <stdio.h>
int main() 
{
    int num1, num2, num3, num4, num5;
    printf("enter value n:");
    scanf("%d",&num);
    
    for (num1 = -100; num1 <= 100; num1++) {
        for (num2 = -100; num2 <= 100; num2++) {
            for (num3 = -100; num3 <= 100; num3++) {
                for (num4 = -100; num4 <= 100; num4++) {
                    for (num5 = -100; num5 <= 100; num5++) {
                        if (num1 * num1 + num2 * num2 + num3 * num3 == num4 * num4 + num5 * num5) {
                            printf("The series is: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    
    printf("no range.\n");
    return 0;
}














































