
/*


        1 
      1 2 
    1 2 3 
  1 2 3 4 
1 2 3 4 5 

*/

#include <stdio.h>
int main()
{
	int i,n,r=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int r=1; r<=n-i; r++){
		printf("  ");
	   }
	   for(int j=1; j<=i; j++){
	     printf("%d ",j);
	   }
	   printf("\n");
	}
	return 0;
}
