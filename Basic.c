#include<stdio.h>
void main(){
    for(int i=0;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}