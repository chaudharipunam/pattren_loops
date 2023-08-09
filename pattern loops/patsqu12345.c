/*

1 2 3 4 5 
10 9 8 7 6 
11 12 13 14 15 
20 19 18 17 16 
21 22 23 24 25 

*/

#include<stdio.h>
int main()
{
  int i,n,p=1;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    for(int j=1;  j<=n; j++){
      if(i%2==0){
        printf("%d ",p);
        p--;
      }
      else{
        printf("%d ",p);
        p++;
      }
    }
    printf("\n");
    if(i%2==0){
      p+=6;
    }
    else{
      p+=4;
    }
 }
  return 0;
}
