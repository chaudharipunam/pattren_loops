/*

enter the num: 6
          1 
        0 1 
      1 0 1 
    0 1 0 1 
  1 0 1 0 1 
0 1 0 1 0 1 

*/

#include<stdio.h>
int main()
{
  int i,n;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    for(int j=1;  j<=n; j++){
      if(j<=n-i){
        printf("  ");
      }
      else if(j%2==0){
        printf("1 ");
      }
      else{
        printf("0 ");
      }
    }
    printf("\n");
  }
  return 0;
}
