/*

enter the num: 5
5 4 3 2 1 
  9 8 7 6 
   121110 
     1413 
       15 

*/

#include<stdio.h>
int main()
{
  int i,n,p=0;
  printf("enter the num: ");
  scanf("%d",&n);
  int s=n;
  int m=9;
  for(i=1; i<=n; i++){
    for(int j=1;  j<=n-p; j++){
      printf("%d ",s);
      s--;
    }
    printf("\n");
    for(int k=1;  k<=i; k++){
      printf("  ");
    }
    s=s+m;
    m-=2;
    p++;
  }
  return 0;
}
