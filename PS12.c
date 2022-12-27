
#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=13;i++){
        for(j=1;j<=13-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }




}
