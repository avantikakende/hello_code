#include<stdio.h>
int main()
{
    int n,m;
    n=1500;
    m=2700;
    for (n; n<=m; n++){
    if (n%5==0){
    if (n%7==0){
    printf("%d\n",n);
    }
    }
    }
    return 0;
}
