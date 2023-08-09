/*

if you type like this :-

enter the num: 4
enter the num for squ pair: 2
1 2 3 4 
2 2 3 4 
3 3 3 4 
4 4 4 4 

enter the num: 5
enter the num for squ pair: 3
1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5 

enter the num: 6
enter the num for squ pair: 4
1 2 3 4 5 6 
2 2 3 4 5 6 
3 3 3 4 5 6 
4 4 4 4 5 6 
5 5 5 5 5 6 
6 6 6 6 6 6 

enter the num: 8
enter the num for squ pair: 6
1 2 3 4 5 6 7 8 
2 2 3 4 5 6 7 8 
3 3 3 4 5 6 7 8 
4 4 4 4 5 6 7 8 
5 5 5 5 5 6 7 8 
6 6 6 6 6 6 7 8 
7 7 7 7 7 7 7 8 
8 8 8 8 8 8 8 8 

Means first type the number & then enter the number ((num-2))
 
*/

#include<stdio.h>
int main()
{
  int i,n,p=1,s;
  printf("enter the num: ");
  scanf("%d",&n);
  printf("enter the num for squ pair: ");
  scanf("%d",&s);
  
  for(i=1; i<=n; i++){
    for(int j=1;  j<=n; j++){
      if(j<=i){
        printf("%d ",p);
      }
      else{
        p++;
        printf("%d ",p);
      }
    }
    printf("\n");
    p-=s;
    s--;
  }
  return 0;
}
