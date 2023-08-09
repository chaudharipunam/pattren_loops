/*

enter the num: 5
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1 

*/

#include <stdio.h>
int main()
{
   int i,n;
   printf("enter the num: ");
   scanf("%d",&n);
   for(i=1; i<=n; i++){
     for(int j=1; j<=n-i; j++){
         printf("  ");
     }
     for(int m=i; m>0; m--){
         printf("%d ",m);
     }
     printf("\n");
   }
   return  0;
}
