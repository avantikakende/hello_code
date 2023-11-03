#include<stdio.h>
int main()
{
    int n,m,max,min,i;
    printf("enter a value of n: ");
    scanf("%d",&n);
    
    printf("enter a value of m: ");
    scanf("%d",&m);
    
    for(i=2; i<=n; i++){
    min,max=m;
    int a;
    printf("enter a value of a:");
    scanf("%d",&a);
    if (min>a){
    min=a;
    }
    if (max<a){
    max=a;
    }
    }
    printf("%d\n%d\n",max,min);
    
    return 0;
}
