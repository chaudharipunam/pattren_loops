
/*

1 
3 2 
6 5 4 
10 9 8 7 
15 14 13 12 11 


*/ 
#include <stdio.h>
int main()
{
	int i,n,k=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("%d ",k);
		k--;
	   }
	   printf("\n");
	   k=k+(2*i)+1;
	}
	return 0;
}
