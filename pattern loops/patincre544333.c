/*

5
44
333
2222
11111

*/

#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	int p=n;
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("%d",p);
	   }
	   printf("\n");
	   p--;
	}
	return 0;
}
