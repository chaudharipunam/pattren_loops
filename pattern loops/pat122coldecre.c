/*

12345
1234
123
12
1

*/

#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; n>=i; n--){
	   for (int j=1; j<=n; j++){
		printf("%d",j);
	   }
	   printf("\n");
	}
	return 0;
}
