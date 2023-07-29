/*
			/144
#include<stdio.h>
int main(){
char name[5][100];
   printf("Enter the name: ");
   for(int i=0;i<5;i++){
      scanf("%s",name[i]);
      }
    for(int i=0;i<5;i++){
      printf("%s\n",name[i]);
      }
      return 0;
      }
 */
 
/*
			/145
#include<stdio.h>
int main()
{
int n;
printf("enter the value n:" );
scanf("%d",&n);
int arr[n];
for (int i=0; i<n; i++){
scanf("%d",&arr[i]);
}

printf("reverse order\n");
for (int i=n-1; i>=0; i--){
printf("%d\n",arr[i]);
}
return 0;
}
*/


/*
			/146
#include<stdio.h>
int main()
{
int n;
printf("enter the value n:" );
scanf("%d",&n);
int arr[n];
for (int i=0; i<n; i++){
scanf("%d",&arr[i]);
}

printf("alternate order\n");
for (int i=n-1; i>=0; i-=2){
printf("%d\n",arr[i]);
}
return 0;
}
*/

/*
			/148
#include <stdio.h>
int main() 
{
    int n,i;
   printf("enter the value for check:");
    scanf("%d",&n); 
 
   int arr[7]={1,2,3,4,5,6,7};
  
   for(int i=0;i<n;i++){
   
    if (arr[i]==n)
    {
    printf("it is exist\n");
    }
    else (i!=7);
    {
    printf("it is not exist\n");
    }
    }
    return 0;
}
*/
























