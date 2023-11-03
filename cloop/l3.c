 //write a program to solid square pattern of n rows and n columns using the asterisk character (+) where integer n is given as an input
 
 
 #include<stdio.h>
int main()
{
    int n,c,i;
    scanf("%d",&n);
       for (i=1; i<=n; i++)
       {
       if(i<=n) 
	    {
		 printf("*");
	    }
	   }
       return 0;
}
