#include <stdio.h>

int main() {
    int a[20],n,current_sum=0,max_sum=0;
    printf("\nEnter the no of elements:");
    scanf("%d",&n);
    printf("\nEnter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        current_sum = current_sum + a[i];
        if (current_sum > max_sum)
        {
           max_sum = current_sum;
        }

        if (current_sum< 0)
        {
            current_sum = 0;
        }

    }

    printf("\nThe largest sum is: %d",max_sum);
}


