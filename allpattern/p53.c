#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "python";
    int length = strlen(word);
    int i, j;

    for (i = 0; i < length; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}

