11111
 2222
  333
   44
    5



#include <stdio.h>
int main()
{
    int n = 5; 
    printf("enter a number n:");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
     
        for (int j = 0; j < i * (i + 1) / 2; j++) {
            printf(" ");
        }

        for (int j = 0; j < n - i; j++) {
            printf("%d ", i + 1);
        }

        printf("\n");
    }

    return 0;
}

