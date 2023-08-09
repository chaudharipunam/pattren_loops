/*

enter the num: 3
        1 
    2 2 2 
3 3 3 3 3 

enter the num: 4
enter the num of s: 7
            1 
        2 2 2 
    3 3 3 3 3 
4 4 4 4 4 4 4 

enter the num: 5
enter the num of s: 9
                1 
            2 2 2 
        3 3 3 3 3 
    4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 5 

enter the num: 6
enter the num of s: 11
                    1 
                2 2 2 
            3 3 3 3 3 
        4 4 4 4 4 4 4 
    5 5 5 5 5 5 5 5 5 
6 6 6 6 6 6 6 6 6 6 6 

enter the num: 7
enter the num of s: 13
                        1 
                    2 2 2 
                3 3 3 3 3 
            4 4 4 4 4 4 4 
        5 5 5 5 5 5 5 5 5 
    6 6 6 6 6 6 6 6 6 6 6 
7 7 7 7 7 7 7 7 7 7 7 7 7 

*/

#include<stdio.h>
int main()
{
  int i,n,p=1,s;
  printf("enter the num: ");
  scanf("%d",&n);
  printf("enter the num of s: ");
  scanf("%d",&s);
  for(i=1; i<=n; i++){
    for(int j=1; j<=s; j++){
      if(j<=s-p){
        printf("  ");
      }
      else{
        printf("%d ",i);
      }
    }
    printf("\n");
    p+=2;
  }
  return 0;
}
