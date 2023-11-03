
/*
#include<stdio.h>
int main()
{
	int n;
	printf("enter a value n:");
	scanf("%d",&n);
	
	for (int i=1; i<=n; i++){
	     int a=1; 
	     for (int j=1; j<=i; j++){
	     int d=a+64;
	     char ch=(char)d;
	     printf("%c",ch);
	     a++;
	    }
	   }
	   return 0;
}  */


/*
65 66 67
65 66 67
65 66 67

#include <stdio.h>

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", j + 64);
        }
        printf("\n");
    }
    
    return 0;
}  */


/*  
##*##
##*##
*****
##*##
##*##

#include<stdio.h>
int main()
{
	int n;
	printf("enter a value of n:");
	scanf("%d",&n);
	
	for(int i=1; i<=5; i++){
	    for (int j=1; j<=5; j++){
	        if (j==3 || i==3)
 			printf("*");
 			else 
 			printf("#");
 			}
 		printf("\n");
 		}
 	return 0;
}	*/

 
 
 /*
 odd no code
    *
    *
  ****
    *		
#include<stdio.h>
int main()
{
	int n;
	printf("enter a value of n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
	    for (int j=1; j<=n; j++){
	    int a=n/2 + 1;
	        if (j==a || i==a)
 			printf("*");
 			else 
 			printf(" ");
 			}
 		printf("\n");
 		}
 	return 0;
}	 */


/*
******
*    *
*    *
******

#include<stdio.h>
int main()
{
	int n,m;
	printf("enter a value of n:");
	scanf("%d",&n);
	
	printf("enter a value of m:");
	scanf("%d",&m);
	
	for(int i=1; i<=n; i++){
	    for (int j=1; j<=m; j++){
	        if (j==1 || j==m ||i==1 || i==n)
 			printf("*");
 			else 
 			printf(" ");
 		}
 		printf("\n");
 		}
 	return 0;
}	*/



/*

*   *
 * *
  *
 * * 
*   * 
#include<stdio.h>
int main()
{
 	int n;
 	printf("enter a number n: ");
 	scanf("%d",&n);
 	
 	for (int i=1; i<=n; i++){
 	for (int j=1; j<=n; j++){
 	      if (i==j || i+j==n+1)
 	      printf("*");
 	      else
 	      printf(" ");
 	      }
 	      printf("\n");
 	     }
 	     return 0;
}    */



/* 
1
23
456
78910

#include<stdio.h>
int main()
{
 	int n;
 	printf("enter a number n: ");
 	scanf("%d",&n);
 	int a=1;
 	for (int i=1; i<=n; i++){
 	for (int j=1; j<=i; j++){
 	      printf("%d",a);
 	      a++;
 	      }
 	      printf("\n");
 	     }
 	     return 0;
}    */


/*
1
01
101
0101

#include<stdio.h>
int main()
{
 	int n,a;
 	printf("enter a number n: ");
 	scanf("%d",&n);
 	
 	for (int i=1; i<=n; i++){
 		if(i%2!=0) a=1;
		else a=0;
	for (int j=1; j<=i; j++){
		printf("%d",a);
		if(a==0) a=1;
		else a=0;
 	      }
 	      printf("\n");
 	     }
 	     return 0;
}    	*/



/*
###*
##**
#***
****

#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
	    for (int j=1; j<=n-i; j++){
	    printf("#");
	    }
	    for (int k=1; k<=i; k++){
	    printf("*");
	    }
	    printf("\n");
	   }
	   return 0;
}	*/


/*
    *
   **
  ***
 ****   
 
#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
	    for (int j=1; j<=n-i; j++){
	    printf(" ");
	    }
	    for (int k=1; k<=i; k++){
	    printf("*");
	    }
	    printf("\n");
	   }
	   return 0;
}	*/


/*
*
***
*****
*******

#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
	    for (int j=1; j<=2*i-1; j++){
	       printf("*");
	       
	    }
	    printf("\n");
	   }
	   return 0;
}	*/


  /*
       *
      ***
     *****
    *******
        
#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	int nst=1;
	for(int i=1; i<=n; i++){
		    for (int k=1; k<=n-i; k++){
            printf(" ");
	    }
	      for (int j=1; j<=nst; j++){
	    printf("*");
	    }
	    nst=nst+2;
	    printf("\n");
	   }
	   return 0;
}	*/



/*

*********
**** ****
***   ***
**     **
*       *

#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	 
	 int nst=n;
	 int nsp=1;
	 for(int i=1;i<=2*n+1; i++){
	        printf("*");
	 }
	 printf("\n");
	for(int i=1; i<=n; i++){
	   for (int j=1; j<=nst; j++){
	        printf("*");
	   }
	   for (int k=1; k<=nsp; k++){
	        printf(" ");
	   }
	   for (int j=1; j<=nst; j++){
	        printf("*");
	   }
	    nst--;
	    nsp+=2;
	    printf("\n");
	   }
	   return 0;
}	*/


/*
1234 6789
123   789
12     89
1       9

#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	 
	 int nst=n;
	 int nsp=1;
	 for(int i=1;i<=n; i++){
	 int a=1;
	   for (int j=1; j<=nst; j++){
	   printf("%d",a);
	   a++;
	 }
	   for (int k=1; k<=nsp; k++){
	        printf(" ");
	        a++;
	   }
	   for (int j=1; j<=nst; j++){
	        printf("%d",a);
	        a++;
	   }
	    nst--;
	    nsp+=2;
	    printf("\n");
	   }
	   return 0;
}	*/


/*
 	* * * *
 	 * * *
 	  * *
 	   *
 	   
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number line n:" );
	scanf("%d",&n);

	int a=n;
	for(int i=1; i<=n; i++){
	    for (int j=1; j<=n; j++){
	    if(a+j<=n){
	       printf(" ");
	       }
	       else{
	       printf("* ");
	       }
	     }
	   printf("\n");
	   a--;
	   }
	   return 0;
}	*/


/*
4 5 4 3 2 
3 4 5 4 3
2 3 4 5 4
1 2 3 4 5

#include<stdio.h>
int main()
{
	int n;
	printf("enter a value n: ");
	scanf("%d",&n);

    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= i + n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}		*/


/*
	   1
         0 1
       1 0 1
     0 1 0 1

#include <stdio.h>
int main() 
{
    int n;
    printf("enter a value n:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        int num = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = !num;
        }

        printf("\n");
    }

    return 0;
}		*/




  /*          
#include <stdio.h>

int main() {
    int n,k;
    printf("enter a value n:");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
        
        (k=24);
        
            printf("%d ",k);
            n = 47;
        }
        printf("\n");
    }
    return 0;
}
*/


/*
	* * * *
	* * * *
	* * * *
	
#include <stdio.h>
int main() 
{
    int n,i, j;
    printf("enter a value n:");
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++) {
        for(j = 0; j <= n; j++) {
        
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}		*/



/*
	55555
	44444
	33333
	22222
	11111
	
#include <stdio.h>
int main() 
{
    int n = 5;
    printf("enter value");
    scanf("%d",&n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}		*/



/*
	123
	654
	789
	
#include<stdio.h>
int main()
{
    int n, count = 1;
    printf("enter value");
    scanf("%d",&n);
	
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}	*/


/*
	5+55+555+5555
	
#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	printf("enter value n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
	sum = sum * 10 + 5;
	{
	printf("%d\n",sum);
	}
	}
	return 0;
}			*/


/*
	1 to 5 table print
	
#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
	for(int j=1; j<=n; j++){
		printf("%d\n",i*j);
	}
		printf("\n");
	}
	return 0;
}			*/
		

/*		
#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	printf("enter value n:");
	scanf("%d",&n);
	
	for (int i=1; i<=10000; i++){
	for (int j=1; j<=n; j++){
	if(n%i==0){
	sum+=i;
	}
        }
        if(sum== n){
           printf("%d\n",n);
           }
        }
        return 0;
}	          */


/*
#include<stdio.h>
int main()
{
	int n,r,sum;
	printf("enter a value n:");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
	r=n%10;
	sum= sum+r***3;
	n=n/10;
	
	if(sum==n)
	{
	printf("%d\n",armstrong n);
	}
	else{
	printf("%d\n",not armstrong n);
	}
	}
	printf("\n");
	
	return 0;
}			*/


/*			natural no
#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	printf("enter value n:");
	scanf("%d",&n);
	
	for (int i=1; i<=n; i++)
	{
	sum += i;
	}
	printf("%d\n",sum);
	
	return 0;
}			*/


/*			even no
#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	printf("enter value n:");
	scanf("%d",&n);
	
	for (int i=2; i<=n; i+=2)
	{
	sum = sum + i;
	}
	printf("%d\n",sum);
	
	return 0;
}			*/

/*			consequtive
#include<stdio.h>
int main()
{
	int n,c;
	int sum=0;
	printf("enter value n:");
	scanf("%d",&n);
	
	for (int i=1; i<=n; i+=2)
	{
	c=c+1;
	sum = sum + i;
	}
	printf("%d\n",sum);
	
	return 0;
}			*/

/*		
		divisible by 7
#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	
	for (int i=1; i<100; i++)
	{
	i%7==0;
	printf("%d\n",i);
	}
	return 0;
}			*/


/*
			product
#include<stdio.h>
int main()
{
	int n;
	int pro=1;
	printf("enter value n:");
	scanf("%d",&n);
	
	for (int i=1; i<=n; i++)
	{
	printf("%d\n",pro*i);
	}
	printf("\n");
	return 0;
}			*/



/*
#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                printf("- ");
            } else {
                printf("+ ");
            }
        }
        printf("\n");
    }

    return 0;
}		*/
 

/*
#include <stdio.h>

int main() {
    int n, i;
    int a = 8, b = 6, c = 9;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("%d ", a);  

    for (i = 1; i < n; i++) {
        if (i % 2 == 1) {
            a = a * 2; 
        } else {
            a = a + b + c;  
            b = b + 2;  
            c = c + 1;
        }
        printf("%d ", a); 
    }

    printf("\n");

    return 0;
}	*/


#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int m= 80;
    int p= 10;

    for (int i = 1; i <= p; i++) {
        if (i % 2 == 0) {
            printf("%d\n ",p);
            p=p+5;
        } else {
            printf("%d\n ",m);
            m=m-10;
        }
    }
    return 0;
}








	
    






























