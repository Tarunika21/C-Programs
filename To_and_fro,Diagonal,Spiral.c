#include<stdio.h>

void toAndFro(int a[5][5],int r, int c)
{
    printf("\nTo and Fro row major order of the matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i%2==0)
            {
            printf("%d ",a[i][j]);
            }
            else
            {
                printf("%d ",a[i][(c-j)-1]);
            }
        }
    }
}

void diagonal(int a[5][5],int r,int c)
{
    printf("\nThe Diagnol major order of the given matrix is:\n");
    for(int k=0;k<c;k++)
    {
        int i=0,j=k;
        while(i<r && j<c)
        {
            printf("%d ",a[i][j]);
            i=i+1;
            j=j+1;
        }
    }

    for(int k=1;k<r;k++)
    {
        int i=k,j=0;
        while(i<r && j<c)
        {
            printf("%d ",a[i][j]);
            i=i+1;
            j=j+1;
        }
    }
}

void spiral(int a[5][5],int r, int c)
{
    int i, k = 0, l = 0;
    printf("\nThe spiral order of the matrix is:\n");
    while (k < r && l < c) {
        for (i = l; i < c; ++i) {
            printf("%d ", a[k][i]);
        }
        k++;
        for (i = k; i < r; ++i) {
            printf("%d ", a[i][c - 1]);
        }
        c--;

        if (k < r) {
            for (i = c - 1; i >= l; --i) {
                printf("%d ", a[r - 1][i]);
            }
            r--;
        }

        if (l < c) {
            for (i = r - 1; i >= k; --i) {
                printf("%d ", a[i][l]);
            }
            l++;
        }
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
    toAndFro(a,r,c);
    printf("\n");
    diagonal(a,r,c);
    printf("\n");
    spiral(a,r,c);

}
