#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf("    ");
        }

        // Print numbers
        for (int k = 0; k <= i; k++) {
            if (k == 0 || k == i) {
                printf("1");
            } else {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}

