#include<stdio.h>
int main()
{
     int i,s,c;
     c=0;
     s=0;
          for (i=1; s<=1000; i++){
          if (i%2==0){
          s=s+i;
          c=c+i;
          }
          }
          printf("%d\n%d\n",s,c);
          return 0;
}
          
