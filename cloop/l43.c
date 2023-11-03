#include<stdio.h>
int main()
{
     int l[8]={23,45,32,25,46,33,71,90};
     int i=1;
     while(i<8){
     if(l[i]%2==0){
     printf("%d\n",l[i]);
     }
     i++;
     }
     return 0;
}
