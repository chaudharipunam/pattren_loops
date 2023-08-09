/*

      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 
* * * * * * * 
 * * * * * * 
  * * * * * 
   * * * * 
    * * * 
     * * 
      * 

*/

#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
	   for (int j=1; j<=n; j++){
	     if(j+i<=n){
	       printf(" ");
	     }
	     else {
	       printf("* ");
	     }
	   }
	   printf("\n");
	}
	for(i-=2; i>=1; i--){
	  for(int p=1; p<=n; p++){
	    if(i+p<=n){
	      printf(" ");
	    }
	    else{
	      printf("* ");
	    }
	  }
	  printf("\n");
	}
	return 0;
}


