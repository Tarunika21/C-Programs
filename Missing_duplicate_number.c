#include <stdio.h>
#include<math.h>
int main() {
    int n,a[50];
    printf("\nEnter the no of elements: ");
    scanf("%d",&n);
    printf("\nEnter the array of elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe repeating element is: ");
    for(int i=0;i<n;i++)
    {
        if(a[abs(a[i])-1] > 0)
        {
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        }
        else
        {
            printf("%d",abs(a[i]));
        }
    }

    printf("\nThe missing element is: ");
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d",i+1);
        }
    }
}


