#include <stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  for(int i=x;i>0;i--){
    for(int sp=x-i;sp>0;sp--){
      printf(" ");
    }
    for(int j=0;j<2*i-1;j++){
      printf("*");
    }
    printf("\n");
    
  }
    return 0;
  
}
