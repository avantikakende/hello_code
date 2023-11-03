#include<stdio.h>
int main()
{
     int n,i,s;
     printf("enter the value of n: ");
     scanf("%d",&n);
        s=1;
        for (i=2; i<=n;){
        if (i%2==0){
        s=s+(i*i);
        i++;
        }
        else {
        s=s-(i*i);
        i++;
        }
        printf("%d\n",s);
        }
        return 0;
}
        
