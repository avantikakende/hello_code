1
121
12321
1234321
123454321
 
 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number pyramid: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        
        for (int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        
        for (int j=i-1; j>=1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}

