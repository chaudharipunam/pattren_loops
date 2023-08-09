/*

enter the num: 4
1 2 3 4 
8 7 6 5 
9 10 11 12 
16 15 14 13 

*/

#include <stdio.h>
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
    if(i%2==0){
      p+=5;
    }
    else{
      p+=3;
    }
    printf("\n");
  }
  return 0;
}
