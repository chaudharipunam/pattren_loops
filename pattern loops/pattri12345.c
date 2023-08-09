#include <stdio.h>
int main()
{
  int i,n,p=1,q=0,t=3,m=5;
  printf("enter the num: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    for(int j=1;  j<=n-q; j++){
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
      p+=m;
    }
    else{
      p+=t;
    }
    for(int k=1; k<=i; k++){
        printf("  ");
    }
    q++;
    t-=1;
    m+=0;
 }
   printf("      15");
  return 0;
}
