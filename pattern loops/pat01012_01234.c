/*

0
01
012
0123
01234

*/

#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=0; j<i; j++){
		printf("%d",j);
	   }
	   printf("\n");
	}
	return 0;
}
