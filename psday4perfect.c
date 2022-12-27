#include<stdio.h>
void perfect(int m, int n){
    for(i=m;i<=n;i++){
        sum=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            printf("%d",i);
        }
    }
}


int main(){
    int x,y;
    printf("enter range\t");
    scanf("%d%d",&x,&y);
    perfect(x,y);

}
