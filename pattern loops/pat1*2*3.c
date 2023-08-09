#include <stdio.h>
int main()
{
	int i,n;
	char star='*';
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; n>=i; n--){
	   for (int j=1; j<=n-1; j++){
		printf("%d ",j);
		printf("%c ",star);
	   }
	   printf("\n");
	}
	return 0;
}
