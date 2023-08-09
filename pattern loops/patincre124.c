/*

1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 


*/
#include <stdio.h>
int main()
{
	int i,n,k=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("%d ",(k*j));
	   }
	   printf("\n");
	   k++;
	}
	return 0;
}
