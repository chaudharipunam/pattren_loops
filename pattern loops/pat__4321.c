
/*

    1
   21
  321
 4321
54321

*/

#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=n-i; j++){
		printf(" ");
	   }
	   for(int j=0; j<i; j++){
	     printf("%d",(i-j));
	   }
	   printf("\n");
	}
	return 0;
}
