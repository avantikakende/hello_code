//write a program which reads n input and print the sum of given input integers.


#include<stdio.h>
int main()
{
      int n,m,i=0,s=0;
      scanf("%d",&n);
          for (int i=0; i<n; i++)
          {
          scanf("%d",&m);
          s=s+m;
          }
          printf("%d",s);
          return 0;
}
