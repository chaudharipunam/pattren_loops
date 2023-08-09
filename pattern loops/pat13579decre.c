/*

1 3 5 7 9 
3 5 7 9 
5 7 9 
7 9 
9 


*/

#include<stdio.h>
int main()
{
  int i,n,k=1;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; n>=i; n--){
    int p=k;
    for(int j=1;  j<=n; j++){
      printf("%d ",p);
      p+=2;
    }
    printf("\n");
    k+=2;
  }
  return 0;
}
