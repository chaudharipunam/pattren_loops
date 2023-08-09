/*

5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 

*/


#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; n>=i; n--){
	   for (int j=n; j>=i; j--){
		printf("%d ",j);
	   }
	   printf("\n");
	}
	return 0;
}
