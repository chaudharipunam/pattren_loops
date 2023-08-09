/*
4 3 2 1   1 2 3 4 
4 3 2       2 3 4 
4 3           3 4 
4               4 

*/

#include <stdio.h>
int main()
{
	int i,n,q=0;
	printf("enter the number: ");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++){
	   for (int j=n; j>=i; j--){
		printf("%d ",j);
	   }
	   for (int p=1; p<=q; p++){
		printf(" ");
	   }
	   for (int r=1; r<=i; r++){
		printf("  ");
	   }
	   for (int s=i; s<=n; s++){
		printf("%d ",s);
	   }
	   printf("\n");
	   q+=2;
	}
	return 0;
}
