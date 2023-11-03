#include <stdio.h>

int findHCF(int a, int b) {
    if (b == 0)
        return a;
    return findHCF(b, a % b);
}

int main() {
    int n, i, num, hcf = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        hcf = findHCF(hcf, num);
    }

    printf("HCF: %d\n", hcf);

    return 0;
}

