#include <stdio.h>

int main() {
    int rows = 3;
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }

        for (k = 1; k <= i; k++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

