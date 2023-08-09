

/*

1
33
555
7777
99999

*/

#include <stdio.h>
int main()
{
	int i,n,m=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("%d",m);
	   }
	   printf("\n");
	   m+=2;
	}
	return 0;
}
