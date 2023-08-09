
/*

0 1 2 3 4 5 6 
0 1 2 3 4 5 
0 1 2 3 4 
0 1 2 3 
0 1 2 
0 1 
 
 */  
 
 
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; n>=i; n--){
	   for (int j=0; j<=n; j++){
		printf("%d ",j);
	   }
	   printf("\n");
	}
	return 0;
}
