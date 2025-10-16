#include<stdio.h>
int main(){
  int x;
  scanf("%d",&x);
  for(int i=0;i<x;i++){
    for(int space=0;space<i;space++){ //loop from 0 to i(row in which the iteration is)
      printf(" ");
    }
    for(int j=0;j<x-i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
  
}
