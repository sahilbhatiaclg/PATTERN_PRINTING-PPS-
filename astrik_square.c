#include<stdio.h>
int main(){
    int x;
    printf("enter number of rows you want to print square of:");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int i=0;i<x;i++){
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
    
}
