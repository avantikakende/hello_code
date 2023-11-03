//write a program to display the number names of the digit of the number is 231 then output should two number entered by user  for example three one.


#include<stdio.h>
int main()
{
    int n,r;
    printf("enter a value of n: ");
    scanf("%d",&n);
        for (n; n>0; n=n/10){
        r=n%10;
     
        if (r==1){
        printf("one\n");
        }
        if (r==2){
        printf("two\n");
        }
        if (r==3){
        printf("three\n");
        }
        if (r==4){
        printf("four\n");
        }
        if (r==5){
        printf("five\n");
        }
        if (r==6){
        printf("six\n");
        }
        if (r==7){
        printf("seven\n");
        }
        if (r==8){
        printf("eight\n");
        }
        if (r==9){
        printf("nine\n");
        }
        }
        return 0;
}
        
        
        
        
        
