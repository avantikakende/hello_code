#include<stdio.h>
#include<string.h>
int main()
{
     int i;
     char a[9];
     strcpy(a,"computer");
     int p = strlen(a);
     i=0;
     
     while (i<p){
     printf("%c\n",a[i]);
     i++;
     }
     return 0;
}
