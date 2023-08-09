#include <stdio.h>
int main()
{
  int i,n;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    for(int j=1;  j<=n; j++){
      if(i==1){
        for(int k=1;  k<=n; k++){
           printf("%d  ",k );
        }
      }
      if (j<=n-i) {
        printf("  ");
      }
      else{
        printf("%d  ",(j+1));
      }
    }
    printf("\n");
 }
 int p=2,j=7;
 for(; p<=n; p++){
   for(int s=1; s<=n; ){
     if(s<=n-i){
       printf("  ");
       s++;
     }
     else{
       printf("%d  ",(j+1));
     }
   }
   printf("\n");
 }
  return 0;
}
