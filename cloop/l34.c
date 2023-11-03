#include<stdio.h>
int main()
{
    float c,s,n,avg;
    printf("enter a number n: ");
    scanf("%f",&n);
        s=0;
        for (c=1; c<=n; c++){
        s=s+c;
        } 
        avg=(s/c);
        printf("%f\n",avg);
        
        return 0;
}
