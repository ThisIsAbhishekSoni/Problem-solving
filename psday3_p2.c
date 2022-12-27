#include<stdio.h>
int main(){
    int i,sum=0,fact=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact/i;
        sum=sum+fact;
        printf("%d\n",sum);
    }
}
