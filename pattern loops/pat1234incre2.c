/*

1 
2 3 4 
5 6 7 8 9 

*/

#include <stdio.h>
int main()
{
	int i,n,c=1,k=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; n>=i; n--){
	   for (int j=1; j<=c; j++){
		printf("%d ",k);
		k++;
	   }
	   printf("\n");
	   c+=2;
	}
	return 0;
}
