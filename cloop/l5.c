//given an integer no n write a program right angled triangle pattern of n  lines using an asterisk character.


#include<stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);
    for (int i=0; i<=n; i++)
	{
	   printf("*");
	   
	 for (int j=0; i<i+1; j++)
	 {
	   printf("*");
	 }
	   printf("\n");
	 }
	  return 0;
}
