/*

1
23
456
78910

*/

#include <stdio.h>
int main()
{
   int i,n,a=0;
   printf("enter the no.: ");
   scanf("%d",&n);
      for(i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
          a++;
          printf("%d",a);
        }
        printf("\n");
      }
      return 0;
}
