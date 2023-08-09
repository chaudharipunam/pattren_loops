/*

enter the num: 5
5 4 3 2 1 
  4 3 2 1 
    3 2 1 
      2 1 
        1 

*/

#include <stdio.h>
int main()
{
   int i,n,s=0;
   printf("enter the num: ");
   scanf("%d",&n);
   int q=n;
   for(i=1; i<=n; i++){
     for(int j=1; j<=n-q; j++){
         printf("  ");
     }
     int t=q;
     for(int p=1; p<=q; p++){
         printf("%d ",t);
         t--;
     }
     printf("\n");
     s++;
     q--;
     
   }
   return  0;
}
