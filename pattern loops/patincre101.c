
/*


0 
1 0 1 
2 1 0 1 2 
3 2 1 0 1 2 3 
4 3 2 1 0 1 2 3 4 


*/

#include <stdio.h>
int main()
{
	int i,n,k=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=k; j>=0; j--){
		printf("%d ",j);
	   }
	   for(int p=1; p<=k; p++){
	     printf("%d ",p);
	   }
	   printf("\n");
	   k++;
	}
	return 0;
}
