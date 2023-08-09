/*

0
2 4 
4 8 8 
8 16 16 16 

*/

#include <stdio.h>
int main()
{
	int i,n,p=2,s=0;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("%d",s);
	printf("\n");
	for (i=3; i<=n; i++){
	   for (int j=2; j<=i; j++){
	     if(j==2){
	       printf("%d ",p);
             }
             else{
               printf("%d ",(p*2));
             }
	   }
	   printf("\n");
	   p*=2;
	}
	return 0;
}

