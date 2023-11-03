//given an intger n write a program  which reads n inputs and print them 


#include <stdio.h>
int main()
{
    int n, i,  sum=0;;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        int input;
        scanf("%d", &input);
        
        sum=sum+input;
        printf("Input %d: %d\n %d\n", i + 1, input, sum);
    }
    
    return 0;
}

