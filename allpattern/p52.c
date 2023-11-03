#include <stdio.h>

int main() {
    int row, col, num = 1;

    for (row = 0; row < 5; row++) {
        for (col = 0; col < 5; col++) {
            if (row % 2 == 0) {
                printf("%2d ", num);
            } else {
                printf("%2d ", 26 - num);
            }
            num++;
        }
        printf("\n");
    }

    return 0;
}

