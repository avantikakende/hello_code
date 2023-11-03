#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sequence[n];
    sequence[0] = 8;
    sequence[1] = 6;

    for (int i = 2; i < n; i++) {
        if (i % 2 == 0) {
            sequence[i] = sequence[i - 2] + sequence[i - 1];
        } else {
            sequence[i] = 2 * sequence[i - 1] - sequence[i - 2];
        }
    }

    printf("The generated sequence is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    return 0;
}

