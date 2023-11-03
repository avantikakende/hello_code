#include<stdio.h>
int main()
{
    int n,m,s;
    printf("enter the value of n: ");
    scanf("%d",&n);
    
    printf("enter the value of m: ");
    scanf("%d",&m);
    
    s=0;
    for(n; n<=m; n++){
    if (n%2==0){
    s=s+n;
    }
    }
    printf("%d\n",s);
    return 0;
}
    
