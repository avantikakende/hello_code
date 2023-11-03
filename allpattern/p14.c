1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


#include <stdio.h>
int main()
{
    int n = 1;
    int count = 1;
    printf("enter a value of n: ");
    scanf("%d",&n);

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}

