/*

enter the num: 5
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
 1 2 3 4 
  1 2 3 
   1 2 
    1 

*/

#include<stdio.h>
int main()
{
  int i,n,s=1;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
  int p=1;
    for(int j=1;  j<=n; j++){
      if(j+i<=n){
        printf(" ");
      }
      else{
        printf("%d ",p);
        p++;
      }
    }
    printf("\n");
    
  }
   for(i=i-2; i>0; i--){
     for(int k=1;  k<=s; k++){
        printf(" ");
     }
     int t=1;
     for(int q=1;  q<=i; q++){
        printf("%d ",t);
        t++;
      }
      printf("\n");
      s++;
  }
  return 0;
}
