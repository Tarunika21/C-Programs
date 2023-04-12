#include<stdio.h>
int main()
{
    int i,j,n,X,sum=0;
    printf("\nEnter the value of n:");
    scanf("%d",&n);
    printf("\nEnter the value of X:");
    scanf("%d",&X);
    j=X;
    printf("\nThe series is:");
    for(i=1;i<=n;i++)
    {
        printf("%d",j);
        if(i<n)
        {
            printf(" + ");
        }
        sum=sum+j;
        j=(j*10)+X;

    }
    printf("\nThe sum is:%d",sum);
}
