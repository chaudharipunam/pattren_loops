/*

6
66
666
6666
66666

*/

#include <stdio.h>
int main()
{
	int i,n,p;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("enter the number of p: ");
	scanf("%d",&p);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("%d",p);
	   }
	   printf("\n");
	}
	return 0;
}
