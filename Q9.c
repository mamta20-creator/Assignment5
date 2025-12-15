#include<stdio.h>
int main()
{
    int i,k,n,j;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        printf(" ");

        for(j=1;j<=i;j++)
        printf(" *");

        printf("\n");
    }
    return 0;
}