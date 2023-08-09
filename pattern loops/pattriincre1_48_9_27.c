
/*

1 
4 8 
9 27 9 
16 64 16 64 

*/

#include <stdio.h>
int main()
{
	int i,n,k=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
	     if(j%2==0){
	       printf("%d ",i*i*i);
	     }
	     else{
	       printf("%d ",i*i);
	     }
	   }
	   printf("\n");
	}
	return 0;
}
