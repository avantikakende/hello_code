/*
1
24
369
481216
.......
upto 8 table 


#include<stdio.h>
int main()
{
	int n;
	printf("enter a value n:");
	scanf("%d",&n);
	
	for (int i=1;i<n;i++)
	{
	    for (int j=1;j<=i;j++)
	    {
	     int  p = i * j;
	      printf("%d",p);
	    }
	    printf("\n");
	}   

       return 0;
}     */


/*
*
**
***
****
*****

#include<stdio.h>
int main()
{
	int n;
	printf("enter a value n:");
	scanf("%d",&n);
	
	for (int i=1;n>=i;i++)
	{
	    for (int j=1;i>=j;j++)
	    {
	      printf("*");
	    }
	    pritf("\n");
	}   

       return 0;
}     	*/


/*
      *
     **
    ***
   ****
      
#include<stdio.h>
int main()
{
	int n;
	printf("enter a value n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n-i;j++)
	    {
	    	printf(" ");
	    }
	    	for(int k=1;k<=i;k++)
	    	{
	    		printf("*");
	    	}                
	    	printf("\n");  
	}
       return 0;
}     */


/*
*****
****
***
**
*

#include<stdio.h>
int main()
{
	int n;
	printf("enter a value n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n-i;j++){
	        printf("*");
	    	}                
	    	printf("\n");  
	}
       return 0;
}     */


/*
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
     
#include<stdio.h>
int main()
{
	int n;
	printf("enter a value n:");
	scanf("%d",&n);
	
	for(int i=n;i>=1;i--){
	    for(int j=1;j<=n-i;j++)
	    {
	    	printf(" ");
	    }
	    	for(int k=1;k<=i;k++)
	    	{
	    		printf("* ");
	    	}                
	    	printf("\n");  
	}
       return 0;
}     	*/


/*
****
 ***
  **
   *
   
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j < i;j++) {
            printf(" ");
        }
     for (int k = 1;k <= n - i + 1;k++) {
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
*****
******
******
*****
****
***
**
*

#include <stdio.h>

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
       printf("\n");
    }
    return 0;
}	*/


/*
 *****
 ****
 ***
 **
 *
 *
 **
 ***
 ****
 *****
 
#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    // Upper half of the pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = i; j <= rows; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = i; j <= rows; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}		*/


/*
1
234
56789
10111213141516

#include<stdio.h>
int main() 
{
     int n;
     scanf("%d",&n);
     int rows = n;
     int number = 1;
    
    for (int i = 0; i < rows; i+=2) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}	*/



#include<stdio.h>
int main()
{
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	
	for (int i=1; i<=n; i++){
	for (int j=1; j<=n; j++){
	
	if




















      
 
 
 
        


