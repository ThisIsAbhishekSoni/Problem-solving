#include<stdio.h>
int main()
{
    int a[10],sum=0,i,n;
    printf("\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=n;i>=0;i--)
    printf("%d ",a[i]);
    return 0;
}
