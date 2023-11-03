/*

 	*
       * *
      * * * 
     * * * *
    * * * * *
   * * * * * *
    * * * * *
     * * * *
      * * *
       * *
	*

#include <stdio.h>
void printPattern(int n) 
{
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
	printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printPattern(n);
	return 0;
}			*/


/*
	1
	11
	121
	1331
	14641
	15101051
	1615201561
	
#include <stdio.h>

int binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}


void printPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {

            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);

    return 0;
}		*/


/*

*_____*
_*___*_
__*_*__
___*___

#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter a value n:");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
        
            if (j == i)
            printf("*");
                
            else if (j == n - i)
                printf("*");
                
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}		*/



/*

	        *
	      * *
	    * * *
	  * * * *
	* * * * *
	  * * * *
	    * * *
	      * *
	        *       

#include <stdio.h>

void printPattern(int n)
{

    int i, j;
    printf("enter value n:");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++) {
    for (j = i; j < n; j++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }
}
int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}		*/


/*

12345
2345
345
45
5

#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}	*/



/*		  
                   *	
                  * *
                 *   *
                *     *
               *       *
                *     *
                 *   *
                  * *
                   *    
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        printf("*");

        for (int j = 1; j < 2 * i - 1; j++) {
            printf(" ");
        }
        if (i > 1) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        printf("*");

        for (int j = 1; j < 2 * i - 1; j++) {
            printf(" ");
        }
        if (i > 1) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}		*/

/*
	 *****
	 *   *
	 *   *
	 *   *
	 *****
#include <stdio.h>
int main() 
{
    int n;
     printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}	*/




/*

* * * * *
*       *
*       *
* * * * *
*       *
*       *
* * * * *
	
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || i == n / 2 + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}		*/
               



    































