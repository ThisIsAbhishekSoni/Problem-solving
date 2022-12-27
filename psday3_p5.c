#include<stdio.h>
int main(){
    int i,x,sum=0,fact=1,n,power=1,s=1;
    printf("enter value of n :-");
    scanf("%d",&n);
    printf("\n enter value of x :-");
    scanf("%d",&x);
    for(i=1;i<=2*n-1;i++){
        fact=fact*i;
        power=power*x;
        sum=sum+(power/fact)*s;
        s=s*-1;
        printf("%d\n",sum);
    }
}


