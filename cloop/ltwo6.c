#include<stdio.h>
int main()
{
      int m,n,i;
      printf("enter a value of n:");
      scanf("%d",&n);
      
      printf("enter a value of m:");
      scanf("%d",&m);
      for (i=m; i<=n; i++){
      if (i%2==0){
             if (i%7==0){
                    printf("%d\n",i);
                 }
                        }
                          }
          return 0;
}

          
