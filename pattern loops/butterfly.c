/*

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 

*/


#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	int p=(n*2)-2;
	for (i=1; i<=n; i++){
	   for (int j=1; j<=i; j++){
		printf("* ");
	   }
	   for(int k=1; k<=p; k++){
	        printf("  ");
	   }
	   for(int b=1; b<=i; b++){
	        printf("* ");
	   }
	   printf("\n");
	   p-=2;
	}
	p=p+2;
	for(i=i-1; i>0; i--){
	  for(int r=1; r<=i; r++){
	    printf("* ");
	  } 
	  for(int f=1; f<=p; f++){
	    printf("  ");
	  }
	  for(int q=1; q<=i; q++){
	    printf("* ");
	  }
	  printf("\n");
	  p+=2;
	}
	return 0;
}
