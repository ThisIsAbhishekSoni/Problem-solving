#include<stdio.h>
int main(){
    int i,x,sum=1,fact=1,n,power=1;
    printf("enter value of n :-");
    scanf("%d",&n);
    printf("\n enter value of x :-");
    scanf("%d",&x);
    for(i=1;i<=n;i++){
        fact=fact*i;
        power=power*x;
        sum=sum+power/fact;
        printf("%d\n",sum);
    }
}

