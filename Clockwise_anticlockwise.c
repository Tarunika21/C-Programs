#include <stdio.h>
void display(int a[5][5],int r,int c)
{
    int transpose[5][5],clock[5][5],antiClock[5][5];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    printf("\nThe transpose of the matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    printf("The 90 deg rorated matrix of clockwise is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=2;j>=0;j--)
        {
            clock[i][j]=transpose[i][j];
            printf("%d ",clock[i][j]);
        }
        printf("\n");
    }

    printf("The 90 deg rorated matrix of anti-clockwise is:\n");
    for(int i=2;i>=0;i--)
    {
        for(int j=0;j<c;j++)
        {
            antiClock[i][j]=transpose[i][j];
            printf("%d ",antiClock[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[5][5],r,c;
    printf("\nEnter the no of rows and colomns:");
    scanf("%d %d",&r,&c);
    printf("\nEnter the elements of the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    display(a,r,c);
}
