5
55
555
5555
55555


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
            
        }
        printf("\n");
    }

    return 0;
}

