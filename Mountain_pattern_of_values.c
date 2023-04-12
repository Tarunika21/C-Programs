#include<stdio.h>
int main()
{
    int i,j,n,min,mid,temp;
    int a[100];
    printf("\nEnter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    printf("\nThe sorted order:");
    for(i=0;i<n;i++)
    {
        printf("%2d",a[i]);
    }

    if(n%2==0)
    {
        mid=n/2;
    }
    else
    {
        mid=n/2+1;
    }

    printf("\nMountain Pattern of values");
    for(i=0;i<n;i++)
    {
            printf("%2d",a[i]);
    }
    for(i=n-1;i>=mid-1;i--)
    {
            printf("%2d",a[i]);
    }

}

