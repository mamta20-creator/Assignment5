#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j % 2==0)
            printf("0");

            else
            printf("1");
        }
    printf("\n");
}
    return 0;
}