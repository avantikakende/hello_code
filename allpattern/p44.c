#include <stdio.h>
int main() 
{
    int n, rows = 5;
    printf("enter a value n:");
    scanf("%d",&n);

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}

