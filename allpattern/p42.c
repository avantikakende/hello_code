4321
 321
  21
   1


#include <stdio.h>
int main()
{
    int rows = 5;
    int cols = 5;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j >= (rows - 1 - i))
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

