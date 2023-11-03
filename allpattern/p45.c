#include <stdio.h>
int main() 
{
    int n, rows = 5;
    int startNum = 5;
    printf("enter a value:");
    scanf("%d",&n);
    
    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            printf("   ");
        }

        // Print numbers in decreasing order
        for (int k = startNum; k >= 1; k--) {
            printf("%d ", k);
        }

        // Print numbers in increasing order
        for (int k = 2; k <= startNum; k++) {
            printf("%d ", k);
        }

        printf("\n");

        startNum += 2;
    }

    return 0;
}

