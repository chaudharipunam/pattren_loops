
/*

1
121
1231
12341
123451

*/

#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("%d",j);
	   }
	   if(i==1){
	   }
	   else{
	   printf("1");
	   }
	    printf("\n");
	}
	return 0;
}
