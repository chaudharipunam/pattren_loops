/*

enter the num: 5
1 1 1 1 1 
    2 2 2 
        3 

*/

#include<stdio.h>
int main()
{
  int i,n,p=2;
  printf("enter the num: ");
  scanf("%d",&n);
  int s=n;
  for(i=1; i<=n; i++){
    for(int j=1;  j<=s; j++){
        printf("%d ",i);
    }
    printf("\n");
    for(int k=1;  k<=p; k++){
        printf("  ");
    }
    p+=2;
    s-=2;
  }
  return 0;
}
