/*

1
44
999
16161616

*/

#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("%d",(i*i));
	   }
	   printf("\n");
	}
	return 0;
}
