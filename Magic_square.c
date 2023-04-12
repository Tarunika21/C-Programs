#include<stdio.h>

int main()
{
    int i,n,r,c,magic[20][20];
    printf("Enter order of magic square (order must be odd): ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("Order must be odd.\n");
        exit(0);
    }
    for(i=1;i<=n*n;i++)
    {
        r=(n-i%n+1+2*((i-1)/n))%n;
        c=((n-1)/2+i-1-(i-1)/n)%n;
        magic[r][c]=i;
    }

    printf("MAGIC SQUARE is:\n");
    for(r=0;r<n;r++)
    {
        for(c=0; c<n; c++)
        {
            printf("%4d ", magic[r][c]);
        }
        printf("\n");

    }
}
